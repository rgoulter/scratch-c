#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    int arr[3][5] = {{3,3,3,3,3},
                     {1,2,3,4,5},
                     {9,8,7,6,5}};

    int buffoffset = 0, buflen = 8;
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
strcpy(bufptr + buffoffset, "[");
buffoffset += strlen("[");
for (int i = 0; i < 3; i++) {
    if (i > 0) {
        while ((buflen - buffoffset) < 4) {
            buflen *= 2;
            bufptr = (char*) realloc(bufptr, buflen * sizeof(char));
        }
        strcpy(bufptr + buffoffset, ", ");
        buffoffset += strlen(", ");
    }

    while ((buflen - buffoffset) < 3) {
        buflen *= 2;
        bufptr = (char*) realloc(bufptr, buflen * sizeof(char));
    }
    strcpy(bufptr + buffoffset, "[");
    buffoffset += strlen("[");
    for (int j = 0; j < 5; j++) {
        if (j > 0) {
            while ((buflen - buffoffset) < 4) {
                buflen *= 2;
                bufptr = (char*) realloc(bufptr, buflen * sizeof(char));
            }
            strcpy(bufptr + buffoffset, ", ");
            buffoffset += strlen(", ");
        }

        {
          int n = snprintf(NULL, 0, "%d", arr[i][j]); // Check
          while ((buflen - buffoffset) < n) {
              buflen *= 2;
              bufptr = (char*) realloc(bufptr, buflen * sizeof(char));
          }
          sprintf(bufptr + buffoffset, "%d", arr[i][j]); // Output Prim
          buffoffset += n;
        }
    }
    while ((buflen - buffoffset) < 3) {
        buflen *= 2;
        bufptr = (char*) realloc(bufptr, buflen * sizeof(char));
    }
    strcpy(bufptr + buffoffset, "]");
    buffoffset += strlen("]");
}
while ((buflen - buffoffset) < 3) {
    buflen *= 2;
    bufptr = (char*) realloc(bufptr, buflen * sizeof(char));
}
strcpy(bufptr + buffoffset, "]");
buffoffset += strlen("]");
    // End of generated code.
    // */

    printf("output struct:\n%s\n", bufptr);
    printf("values should be 420, 321\n");
}
