#include <stdio.h>

int main() {
    int arr3[] = { 2, 3, 4 };
    printf("sizeof arr3 = %d\n", sizeof(arr3) / sizeof(int));

    int arr[] = { 2, [3 * 3] = 3, 4, [2] = 5, 6};
    printf("sizeof arr = %d\n", sizeof(arr) / sizeof(int));
    printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);

}
