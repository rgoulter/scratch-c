#include <stdio.h>

int main(int argc, char *argv[])
{
    enum MyEnum {CAT, DOG};
    enum MyEnum foo = CAT;

    printf("foo = %d\n", foo);

    enum AnEnum {HUN = 100, TEN = 10, ONE = 1, TWO};
    enum AnEnum x = HUN;
    enum AnEnum y = TWO;
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
