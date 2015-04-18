#include <stdio.h>

int main(int argc, char* argv) {

    int arr[3] = {1, 3, 4};

    int *p = arr;

    printf("%d\n", *(p + 2));
}
