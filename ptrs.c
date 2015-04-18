// What are some examples of declarations to deal with?
// How many of these can we deal with for now?
#include <stdio.h>

int myFunc(int x) {
    return x * x;
}

int square(int x) {
    return x * x;
}

struct MyStruct {
    int x;
    float y;
};
typedef struct MyStruct MyStruct_t;

typedef int (*intFunc)(int);

int main(int argc, char **argv) {
    int x = 2;
    int *intPtr = &x;

    int arr[4] = {5, 6, 7, 8};

    char *str = "hello";

    // structs
    MyStruct_t myStruct = { 5, 3.5 };
    MyStruct_t *strPtr = &myStruct;

    // func ptrs
    int (*func1)(int) = &myFunc;
    intFunc func2 = &square;

    // const ptrs
    int * const p = &x; // val is const
    const int * q = &x; // ptr is const
    const int * const r = &x;
}
