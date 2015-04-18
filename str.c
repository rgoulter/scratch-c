#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Goal: Construct a string from an array or multi-dimension array.

    // Construct array
    int arr[3][4] = {{0, 1, 2, 3},
                     {4, 5, 6, 7},
                     {8, 9, 10, 11}};
    int arrDim1Len = 3;
    int arrDim2Len = 4;

    int bufLen = 8; // start with a super-small buffer
    char *buf = (char*) malloc(bufLen * sizeof(char));
    int offset = 0;

    // n.b. Don't need to worry about newlines, since Sc. master can take care of this.

    // Construct using buf : char*, offset : int, bufLen : int
    // Construct string for arr : int[][], arrDim1Len = 3
    strcpy(buf + offset, "{");
    offset += 1;
    for (int i = 0; i < arrDim1Len; i++) {
        if (i > 0) {
            if ((bufLen - offset - 1) < 2) { // CHECKSIZE
                bufLen *= 2;
                buf = (char*) realloc(buf, bufLen * sizeof(char));
            }
            strcpy(buf + offset, ", ");
            offset += 2;
        }

        // Construct string for arr[i] : int[], arrDim2Len = 4
        if ((bufLen - offset - 1) < 1) { // CHECKSIZE
            bufLen *= 2;
            buf = (char*) realloc(buf, bufLen * sizeof(char));
        }
        strcpy(buf + offset, "{");
        offset += 1;
        for (int j = 0; j < arrDim2Len; j++) {
            if (j > 0) {
                if ((bufLen - offset - 1) < 2) { // CHECKSIZE
                    bufLen *= 2;
                    buf = (char*) realloc(buf, bufLen * sizeof(char));
                }
                strcpy(buf + offset, ", ");
                offset += 2;
            }

            // Construct string for arr[i][j] : int
            // CHECKSIZE...****
            int n = snprintf(NULL, 0, "%d", arr[i][j]); // dry run
            while ((bufLen - offset - 1) < n) { // CHECKSIZE
                bufLen *= 2;
                buf = (char*) realloc(buf, bufLen * sizeof(char));
            }
            sprintf(buf + offset, "%d", arr[i][j]);
            offset += n;
        }
        if ((bufLen - offset - 1) < 1) { // CHECKSIZE
            bufLen *= 2;
            buf = (char*) realloc(buf, bufLen * sizeof(char));
        }
        strcpy(buf + offset, "}");
        offset += 1;
    }
    if ((bufLen - offset - 1) < 1) { // CHECKSIZE
        bufLen *= 2;
        buf = (char*) realloc(buf, bufLen * sizeof(char));
    }
    strcpy(buf + offset, "}");
    offset += 1;

    printf("Output:\n%s\n", buf);

    return 0;
}
