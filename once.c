#include <stdio.h>

void f(void) {
    {
        static int b = 1;
        if (b) {
            printf("Once!\n");
            b = 0;
        }
    }
    printf("In f\n");
}

int main() {
    f();
    f();
}
