#include <stdio.h>

int sqr();
int id();

int main(int argc, char *argv[]) {
    int (*f)(int);

    f = sqr;
    // f = id;

    printf("%d\n", f(5));
}

int sqr(int x) {
    return x * x;
}

int id(int x) {
    return x;
}
