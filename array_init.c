#include <stdio.h>


int main(int argc, char **argv) {
    int a[5];
    int b[] = { 1, 2, 3, 4, 5 };
    int c[] = { [4] = 1 };

    printf("Size of arrays: %d, %d, %d\n", sizeof a, sizeof b, sizeof c);
}
