#include <iostream>

int main() {
    int num;
    scanf("%o", &num);
    printf("%o\n", num);

    printf("%x\n", num);
    printf("%x\n", num << 3);

    printf("%x\n", num);
    printf("%x\n", ~num);

    int num2;
    scanf("%x", &num2);
    printf("%x\n", num&num2);
}