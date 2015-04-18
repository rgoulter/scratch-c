#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    struct MyStruct {int x; int y;};
    struct MyStruct myStruct = { 420, 321 };

    int buffoffset = 0, buflen = 128;
    char *bufptr = (char*) malloc(buflen * sizeof(char));

    strcpy(bufptr, "abc");
    int k = 3;
    strcpy(bufptr + k, "def");
    //*
    // GENERATED:
while ((buflen - buffoffset) < 3) {
    buflen *= 2;
    bufptr = (char*) realloc(bufptr, buflen * sizeof(char));
}
strcpy(bufptr + buffoffset, "{");
buffoffset += strlen("{");
  {
    int n = snprintf(NULL, 0, "%d", myStruct.x); // Check
    while ((buflen - buffoffset) < n) {
        buflen *= 2;
        bufptr = (char*) realloc(bufptr, buflen * sizeof(char));
    }
    sprintf(bufptr + buffoffset, "%d", myStruct.x); // Output Prim
    buffoffset += n;
  }
  while ((buflen - buffoffset) < 4) {
      buflen *= 2;
      bufptr = (char*) realloc(bufptr, buflen * sizeof(char));
  }
  strcpy(bufptr + buffoffset, ", ");
  buffoffset += strlen(", ");{
    int n = snprintf(NULL, 0, "%d", myStruct.y); // Check
    while ((buflen - buffoffset) < n) {
        buflen *= 2;
        bufptr = (char*) realloc(bufptr, buflen * sizeof(char));
    }
    sprintf(bufptr + buffoffset, "%d", myStruct.y); // Output Prim
    buffoffset += n;
  }

while ((buflen - buffoffset) < 3) {
    buflen *= 2;
    bufptr = (char*) realloc(bufptr, buflen * sizeof(char));
}
strcpy(bufptr + buffoffset, "}");
buffoffset += strlen("}");
    // End of generated code.
    // */

    printf("output struct:\n%s\n", bufptr);
    printf("values should be 420, 321\n");
}
