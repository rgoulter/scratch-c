#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[])
{
    int x = 5;

    // disable assert w/ defining NDEBUG, -DNDEBUG
    assert(x > 10);
    return 0;
}
