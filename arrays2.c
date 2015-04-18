#include <stdio.h>

int main(int argc, char **argv) {
    int arr[3] = {4, 5, 6};

    int arr2[3] = *((int (*)[3]) { arr }[0]);
}
