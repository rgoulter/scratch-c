#include <stdio.h>

int y = 4;

// A couple of functions which return pointers-to-ints.
// (Use ints in global scope).
int* f1() {
    static int x = 3;
    return &x;
}

int* f2() {
    return &y;
}

// Typedef, so the program can be easier to read.
typedef int* (*fPtrInt)();

int main(int argc, char **argv) {
    fPtrInt a = &f1;
    fPtrInt b = &f1;

    int *p = a();

    // Check that we can modify static value of f1.
    printf("%d\n", *p);
    *p = 9;
    printf("%d\n", *(f1()));


    // Example of declaring a compound literal which returns
    // pointer-to function-pointers-of functions taking no arguments
    // returning pointer-to-int.

    fPtrInt *fpArr = (fPtrInt[]) { a, b };

    printf("%d\n", *(fpArr[0]()));

    // And now without the typedef

    /* int* ((**fpArr2)()) = (int* (*[])()) { &f1, &f2 }; */
    int* ((**fpArr2)()) = (int *(*[])()) { &f1, &f2 };
    printf("%d\n", *(fpArr2[0]()));
}
