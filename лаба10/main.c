#include <stdio.h>

int NOD(int a, int b)
{
    while (a && b)
    {
        if (a >= b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }
    return a | b;
}
int NOK(int a, int b)
{
    return a * b / NOD(a, b);
}

int digitsSum(int n)
{
    if(!n)
        return 0;
    return digitsSum(n / 10) + n % 10;
}

int main()
{
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    printf("НОД = %d\n", NOD(x, y));
    printf("НОК = %d\n", NOK(x, y));

    int n;
    scanf("%d", &n);
    printf("Сумма цифр = %d\n", digitsSum(n));
    return 0;
}





