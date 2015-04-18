#include <stdio.h>
#include <stdarg.h>

int __worksheet_max_of_n(int n, ...)
{
    va_list ap;
    int max = 0;

    va_start(ap, n);

    for (; n; n--) {
        int tmp = va_arg(ap, int);
        if (tmp > max)
            max = tmp;
    }

    va_end(ap);
    return max;
}

int main(int argc, char **argv) {
    int max = __worksheet_max_of_n(3, 5, 9, 4);
    printf("Max: %d\n", max);
}
