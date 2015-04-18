#include <stdio.h>

int main(int argc, char **argv) {
    int arr1[] = { 2, 3, 5, 4, 7 };
    int arr1_n = sizeof arr1  / sizeof(int);
    int arr1_n2 = sizeof arr1  / sizeof arr1[0];
    printf("arr1 length: %d\n", arr1_n);
    printf("arr1 length: %d\n", arr1_n2);


    int arr2[][3] = { { 5, 6, 7 }, {9, 3, 2} };
    int arr2_n2 = sizeof arr2 / sizeof arr2[0];
    printf("arr2 length: %d\n", arr2_n2);
    int arr2_dim2_n2 = sizeof arr2[0] / sizeof arr2[0][0];
    printf("arr2 dim 2 length: %d\n", arr2_dim2_n2);
}
