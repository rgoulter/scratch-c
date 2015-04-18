#include <stdio.h>

int main(int argc, char *argv[])
{
    {
        typedef int myT;
        myT x = 3;
        printf("%d\n", x);
    }

    {
        typedef char * myT;
        myT x = "somestr";
        printf("%s\n", x);
    }

    typedef int myInt;
    const myInt x;
    myInt y; // compile error?
    static myInt myStaticInt;

    return 0;
}
