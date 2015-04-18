#include <stdio.h>
#define X(a) for (int i = 0; i < 5; i++) { a += i; }
int main() {
  int x = 5;
  printf("%d\n", x);
  X(x);
  printf("%d\n", x);
}
