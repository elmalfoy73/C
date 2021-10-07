#include <stdio.h>
#define MIN -50
#define MAX 50

void main()
{
    int num = 0;
    scanf("%d", &num);
    int result = MIN <= num && num <= MAX;
    printf(result ? "YES":"NO");
}