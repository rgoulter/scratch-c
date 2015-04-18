#include <stdio.h>

int main() {
    struct MyS {int x; struct {int x;} y;};
    struct MyS s = {1, {2}};

    printf("{%d, {%d}}\n", s.x, s.y.x);
}
