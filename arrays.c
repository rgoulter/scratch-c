#include <stdio.h>

int someFunc() {
    return 5;
}

// single line comment
int main(int argc, char **argv) {
    int n = 5, arr[n];
    arr[n - 1] = 5;
    int arr2[][2] = {{1,2}, {3,4}};
    // int arr2[2][] = {{1,2}, {3,4}}; // INCOMPLETE!!

    // int arr3[];
    int warr[] =  { [' '] = 1, ['\t'] = 1, ['\n'] = 1, ['\r'] = 1 };
    int (*parr)[];
    parr =  &(int[256]){ [' '] = 1, ['\t'] = 1, ['\n'] = 1, ['\r'] = 1 };

    int *parr2;
    parr2 =  (int[256]){ [' '] = 1, ['\t'] = 1, ['\n'] = 1, ['\r'] = 1 };

    printf("%d\n", arr[n-1]);
    printf("%d\n", arr2[1][1]);

    printf("%d\n", *((int[]) {3, 4, 9, 8} + 2));
    printf("%d\n", ' ');

}
