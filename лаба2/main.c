#include <stdio.h>

int main() {
    float a;
    scanf("%f", &a);
    float z1 = (1/((1 + a + a*a)/(2*a + a* a) + 2 - (1 - a + a*a)/(2*a - a* a)))*(5 - 2*a*a);
    float z2 = (4 - a*a)/2;
    printf("%f\n", z1);
    printf("%f", z2);
    return 0;
}