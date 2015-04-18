#include <stdio.h>

int f1(int x) {
    return x + 1;
};

int main(int argc, char **argv) {
    int (*fp)(int);
    fp = f1;
    int res = fp(5);
    printf("%d\n", res);
}
