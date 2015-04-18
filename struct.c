#include <stdio.h>

struct MyStruct {
    int val1;
    int val2;
};
typedef struct MyStruct MyStruct_t;

void print_struct(MyStruct_t s) {
    printf("{%d, %d}\n", s.val1, s.val2);
}

int main(int argc, char *argv[])
{
    MyStruct_t t1 = { 3, 4 };
    MyStruct_t t2 = { val2: 5, val1: 7 };

    printf("t1 = ");
    print_struct(t1);
    printf("t2 = ");
    print_struct(t2);
    return 0;
}
