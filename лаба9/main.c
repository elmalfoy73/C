#include <stdio.h>
#include <string.h>

int IsSimple(int n)
{
    int isSimple = 1;
    for (int i=2; i<n; i++)
        if (n % i == 0)
        {
            isSimple = 0;
            break;
        }
    return isSimple;
}

int main()
{
    char str[256];
    scanf("%255s", str);
    int digits = 0;
    int lowerCase = 0;
    int upperCase = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= '0' & str[i] <= '9')
        {
            digits++;
        }
        else if (str[i] >= 'a' & str[i] <= 'z')
        {
            lowerCase++;
        }
        else if (str[i] >= 'A' & str[i] <= 'Z')
        {
            upperCase++;
        }
    }
    printf("Цифры: %d\nСтрочные буквы: %d\nПрописные буквы: %d\n", digits, lowerCase, upperCase);

    int n;
    scanf("%d", &n);
    for (int i=2; i<=n; i++)
    {
        if (IsSimple(i))
            printf("%d\n", i);

    }
    printf("\n");

    return 0;
}
