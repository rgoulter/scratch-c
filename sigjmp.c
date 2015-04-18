#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <setjmp.h>

static jmp_buf buf;

static void catch_function(int signo) {
    printf("Caught signal, jump back\n");
    longjmp(buf,1);
}

int main() {
    // Setup the signal.

    int x = 5;
    int *ptrToInt;

    // Try to read a bad ptr
    ptrToInt = 0;

    signal(SIGSEGV, catch_function);
    if (!setjmp(buf)) {
        printf("Read pointer: %d\n", *ptrToInt);
    } else {
        printf("Well, failed to read ptr. Continue..\n");
    }


    signal(SIGSEGV, catch_function);
    if (!setjmp(buf)) {
        printf("Read pointer: %d\n", *ptrToInt);
    } else {
        printf("Well, failed to read ptr. Continue..\n");
    }


    // Try to read a good pitr
    ptrToInt = &x;

    if (!setjmp(buf)) {
        printf("Read pointer: %d\n", *ptrToInt);
    } else {
        printf("Well, failed to read ptr. Continue..\n");
    }


    // Now segf!
    signal(SIGSEGV, catch_function);
    if (setjmp(buf)) {
        printf("Back in main. If here, must have SIGSEGV. Exiting.\n");
        return 0;
    }

    ptrToInt = 0;
    *ptrToInt = 5; // throw SIGSEGV

    printf("Shouldn't reach this line.\n");

    return 0;
}
