#include <stdio.h>

int main(int argc, char *argv[])
{
    union MyUnion {int i; float f;};
    union MyUnion u;
    u.i = 5;
    u.f = 0.5f;
    return 0;
}
