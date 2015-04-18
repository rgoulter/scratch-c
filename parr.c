#include <stdio.h>

int main(int argc, char **argv) {
    int (*p)[][2];
    int a[][2] = { {1, 2}, {3, 4} };
    p = a;

    printf("%d\n", a[1][0]);
    printf("%d\n", (*p)[1][0]);
}
