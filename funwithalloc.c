#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct AllocSize { void *ptr; size_t size; struct AllocSize *next;};
typedef struct AllocSize AllocSize_t;
static AllocSize_t *memorySizes = NULL;
static AllocSize_t * initMemSize(void* ptr, size_t n) {
    AllocSize_t *ms = (AllocSize_t*) malloc(sizeof(AllocSize_t));
    ms->ptr = ptr;
    ms->size = n;
    ms->next = NULL;
    return ms;
}
static void registerMemSize(void* ptr, size_t n) {
    assert(memorySizes != NULL);
    AllocSize_t *ms = memorySizes;

    while (ms->next != NULL) {
        if (ms->ptr == ptr) {
            ms->size = n;
            return;
        }
        ms = ms->next;
    }

    ms->next = initMemSize(ptr, n);
}
static size_t lookupMemSize(void* ptr) {
    // memorySizes can't be null
    AllocSize_t *ms = memorySizes;

    while (ms != NULL) {
        if (ms->ptr == ptr) {
            return ms->size;
        }
        ms = ms->next;
    }

    return 0;
}

int main(int argc, char *argv[])
{
    memorySizes = initMemSize(NULL, 0);

    int stArray[0];// = {1,2,3,4,5};
    registerMemSize(&stArray[0], 5 * sizeof(stArray[0])); // can 0-index even w/out ...

    int *ptrToArr = stArray;

    int *arr = (int*) malloc(sizeof(int) * 8);
    registerMemSize(arr, sizeof(int) * 8);
    arr[0] = 1;
    arr[1] = 5;
    arr[2] = 10;

    // but if set ptr..
    // e.g. arr = &x;
    // must update size!
    // registerMemSize(arr, sizeof(x));

    printf("arr size: %d\n", sizeof(arr)); // 8.
    printf("*arr size: %d\n", sizeof(*arr)); // 8.
    printf("arr memory size: %d\n", lookupMemSize(arr));
    printf("ptrToArr memory size: %d\n", lookupMemSize(ptrToArr));
    return 0;
}
