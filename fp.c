#include <stdio.h>

int f1(int x) {
    return x + 1;
}

int f2(int x) { return x * 2; }

int (*sw(int))(int);
int (*sw(int whatever))(int) {
  return f2;
}

int eval(int (*fp)(int)) {
    int res = fp(7);
    printf("%d\n", res);
}

int main(int argc, char **argv) {
    int (*fp)(int) = sw(5);

    int res = fp(5);
    printf("%d\n", res);

    eval(f1);
    eval(f2);
}
