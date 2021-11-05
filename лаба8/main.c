#include <stdio.h>
#include <string.h>

void copy(char from[], char to[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0') i++;
}

void copyN(char from[], char to[], int n)
{
    for(int i = 0; i<n; i++){
        to[i] = from[i];
    }
    to[n] = '\0';
}

void summa(char one[], char two[], char result[], int n)
{
    copy(one, result);
    int len = 0;
    int j = 0;
    while (one[len] != '\0') {
        result[j] = one[j];
        len++;
    }
    for(int i = 0; i<n; i++){
        result[len] = two[i];
        len++;
    }
    result[len] = '\0';
}

int main() {
    char str1[50];
    char str2[50];
    int n;
    char sym;
    scanf("%49s", &str1);
    scanf("%49s", &str2);
    scanf("%d", &n);
    scanf("%s", &sym);

    char strSumma[100];
    summa(str1, str2, strSumma, n);
    printf("Сумма 1 строки и n первых символов 2: %s\n", strSumma);

    char strCopy1[50];
    copy(str1, strCopy1);
    printf("Копия 1 строки: %s\n", strCopy1);

    char strCopy2[50];
    copyN(str1, strCopy2, n);
    printf("Копия n первых символов 1 строки: %s\n", strCopy2);

    char *ach;
    ach = strrchr(str1, sym);
    printf("Последнее вхождение символа в строку: %d\n", ach-str1);

    printf("Длина отрезка одной строки, не содержащего символы второй строки %d \n", strcspn(str1,str2));

    return 0;
}
