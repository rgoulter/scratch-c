#include <stdio.h>

int main(int argc, char** argv) { // Line 03
  union MyUnion { int i; float f; };
  union MyUnion u = { .i = 3 };

  int x = 5;
  int f = 3;

  u = (union MyUnion) { .i = 4 };
  printf("u.i = %d\n", u.i);
  printf("u.f = %g\n", u.f);
  f = (union MyUnion) { .i = 4 }.f;


  f = (union {int i; float f;}) { .i = 4 }.f;

  // array
  int a = 3, b = 4, c = 5;
  int *p = &a;
  int *q = &b;

  int **ptrToPtrs = (int (*[])) { p, q };

  printf("deref = %d\n", *(ptrToPtrs[0]));

  printf("f = %g\n", f);
}
