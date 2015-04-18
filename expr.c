#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>

static jmp_buf buf;
static void catch_function(int signo) {
    longjmp(buf,1);
}int f() {
printf("FUNCTION ENTER\n");

  printf("LINE 4\n");
if (setjmp(buf)) { // ASSUME setjmp buf is `buf`.
    printf("SEGFAULT\n");
    exit(EXIT_SUCCESS);
}
if (signal(SIGSEGV, catch_function) == SIG_ERR) {
    fputs("An error occurred while setting a signal handler.\n", stderr);
    exit(EXIT_FAILURE);
}
{ printf("FUNCTION RETURN\n");
return 5;}

printf("FUNCTION RETURN\n");
}

int main(int argc, char* argv) {
printf("FUNCTION ENTER\n");
 // Line 03
  printf("LINE 8\n");
if (setjmp(buf)) { // ASSUME setjmp buf is `buf`.
    printf("SEGFAULT\n");
    exit(EXIT_SUCCESS);
}
if (signal(SIGSEGV, catch_function) == SIG_ERR) {
    fputs("An error occurred while setting a signal handler.\n", stderr);
    exit(EXIT_FAILURE);
}
printf("WORKSHEET s1 is struct S {int x; int y;}\n");
struct S {int x; int y;} s1 = {3, 4};
  printf("LINE 9\n");
if (setjmp(buf)) { // ASSUME setjmp buf is `buf`.
    printf("SEGFAULT\n");
    exit(EXIT_SUCCESS);
}
if (signal(SIGSEGV, catch_function) == SIG_ERR) {
    fputs("An error occurred while setting a signal handler.\n", stderr);
    exit(EXIT_FAILURE);
}
printf("WORKSHEET ps1 is pointer to struct S\n");
struct S *ps1 = &s1;
  printf("LINE 10\n");
if (setjmp(buf)) { // ASSUME setjmp buf is `buf`.
    printf("SEGFAULT\n");
    exit(EXIT_SUCCESS);
}
if (signal(SIGSEGV, catch_function) == SIG_ERR) {
    fputs("An error occurred while setting a signal handler.\n", stderr);
    exit(EXIT_FAILURE);
}
printf("WORKSHEET arr is array 3 of int\n");
int arr[3] = {3,4,5};

  // Various postfix expressions
  printf("LINE 13\n");
if (setjmp(buf)) { // ASSUME setjmp buf is `buf`.
    printf("SEGFAULT\n");
    exit(EXIT_SUCCESS);
}
if (signal(SIGSEGV, catch_function) == SIG_ERR) {
    fputs("An error occurred while setting a signal handler.\n", stderr);
    exit(EXIT_FAILURE);
}
arr[1];
  int offset_res0 = 0, len_res0 = 8;
char * res0 = (char*) malloc(len_res0 * sizeof(char));
{
  int n = snprintf(NULL, 0, "%d", arr[arr_0]); // Check
  while ((len_res0 - offset_res0) < n) {
      len_res0 *= 2;
      res0 = (char*) realloc(res0, len_res0 * sizeof(char));
  }
  sprintf(res0 + offset_res0, "%d", arr[arr_0]); // Output Prim
  offset_res0 += n;
}
printf("WORKSHEET %s\n", res0);
free(res0); res0 = NULL;
  printf("LINE 14\n");
if (setjmp(buf)) { // ASSUME setjmp buf is `buf`.
    printf("SEGFAULT\n");
    exit(EXIT_SUCCESS);
}
if (signal(SIGSEGV, catch_function) == SIG_ERR) {
    fputs("An error occurred while setting a signal handler.\n", stderr);
    exit(EXIT_FAILURE);
}
f();
  printf("LINE 15\n");
if (setjmp(buf)) { // ASSUME setjmp buf is `buf`.
    printf("SEGFAULT\n");
    exit(EXIT_SUCCESS);
}
if (signal(SIGSEGV, catch_function) == SIG_ERR) {
    fputs("An error occurred while setting a signal handler.\n", stderr);
    exit(EXIT_FAILURE);
}
s1.x;
  int offset_res1 = 0, len_res1 = 8;
char * res1 = (char*) malloc(len_res1 * sizeof(char));
{
  int n = snprintf(NULL, 0, "%d", s1.x); // Check
  while ((len_res1 - offset_res1) < n) {
      len_res1 *= 2;
      res1 = (char*) realloc(res1, len_res1 * sizeof(char));
  }
  sprintf(res1 + offset_res1, "%d", s1.x); // Output Prim
  offset_res1 += n;
}
printf("WORKSHEET %s\n", res1);
free(res1); res1 = NULL;
  printf("LINE 16\n");
if (setjmp(buf)) { // ASSUME setjmp buf is `buf`.
    printf("SEGFAULT\n");
    exit(EXIT_SUCCESS);
}
if (signal(SIGSEGV, catch_function) == SIG_ERR) {
    fputs("An error occurred while setting a signal handler.\n", stderr);
    exit(EXIT_FAILURE);
}
ps1->y;
  int offset_res2 = 0, len_res2 = 8;
char * res2 = (char*) malloc(len_res2 * sizeof(char));
{
  int n = snprintf(NULL, 0, "%d", (*ps1).y); // Check
  while ((len_res2 - offset_res2) < n) {
      len_res2 *= 2;
      res2 = (char*) realloc(res2, len_res2 * sizeof(char));
  }
  sprintf(res2 + offset_res2, "%d", (*ps1).y); // Output Prim
  offset_res2 += n;
}
printf("WORKSHEET %s\n", res2);
free(res2); res2 = NULL;
  printf("LINE 17\n");
if (setjmp(buf)) { // ASSUME setjmp buf is `buf`.
    printf("SEGFAULT\n");
    exit(EXIT_SUCCESS);
}
if (signal(SIGSEGV, catch_function) == SIG_ERR) {
    fputs("An error occurred while setting a signal handler.\n", stderr);
    exit(EXIT_FAILURE);
}
(int[3]) {7,6,8};

printf("FUNCTION RETURN\n");
}
