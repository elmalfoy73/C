#include <stdio.h>

int main() {
    int array1[4] = {-1, -12, -123, -1234};
    int *p = array1;
    int i;
    for (i = 0; i<4; i++)
        printf("%d ", *(p+i));
    printf("\n");


    void* malloc();
    void* free();
    int *array2 = (int *)malloc(4 * sizeof(int));
    array2[0] = -1;
    array2[1] = -12;
    array2[2] = -123;
    array2[3] = -1234;
    for (int i = 0; i < 4; ++i)
        printf("%d ", array2[i]);
    free(array2);
    return 0;
}