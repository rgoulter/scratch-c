#include <stdio.h>

void print3(int arr[3]) {
  printf("[%d %d %d]\n", arr[0], arr[1], arr[2]);
}

void vl_print3(int arr[]) {
  printf("[%d %d %d]\n", arr[0], arr[1], arr[2]);
}

// single line comment
int main(int argc, char **argv) {
    int arr[3] = { 4, 6, 9 };
    int arr3[] = { 4, 6, 9 };

    print3(arr);
    print3(arr3);

    vl_print3(arr);
    vl_print3(arr3);

    void (*fp3)(int[3]);
    void (*fpV)(int[*]);

    fp3 = print3;
    fp3 = vl_print3;

    fpV = print3;
    fpV = vl_print3;
}
