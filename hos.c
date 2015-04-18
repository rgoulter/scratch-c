#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv) {
    int x = 3;
    int vla[x];
    float f = 9;

    int *ptr = (int*) malloc(3 * sizeof(int));

    printf("addr(x)  = %p\n", &x);
    printf("addr(vla)= %p\n", vla);
    printf("addr(f)  = %p\n", &f);
    printf("addr(ptr)= %p\n", ptr);
    printf("sizeof(int) = %lu\n", sizeof(int));
    printf("sizeof(float) = %lu\n", sizeof(float));

    free(ptr);
}
