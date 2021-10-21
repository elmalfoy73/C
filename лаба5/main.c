#include <stdio.h>

int main()
{
    int array1[7] = {123, 123, 123, 123, 456, 321, 1};
    int i;
    for (i = 0; i<7; i++)
        printf("%d ", array1[i]);
    printf("\n");

    int array2a[2][2] = {1, 2, 3, 1};
    int array2b[2][2] = {1, 1, 0, 2};
    int result[2][2] = {};
    int j;
    for (i = 0; i<2; i++) {
        for (j = 0; j < 2; j++) {
            result[i][j] = array2a[i][0] * array2b[0][j] + array2a[i][1] * array2b[1][j];
        }
        printf("%d %d\n", result[i][0], result[i][1]);
    }
    return 0;
}
