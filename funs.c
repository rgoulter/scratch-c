#include <stdio.h>

/* int f(x, y) int x, y; */
float f(float, float);

float f(x, y) float x, y; {
    return x + y;
}

int main(int argc, char **argv) {
    float res = f(3.4, 4.5);
    printf("res %f\n", res);
}
