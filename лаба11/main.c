#include <stdio.h>
#include "11.c"
#include "11.h"

int main() {
    struct coordinate dot1, dot2, dot3;
    scanf("%d%d%d%d%d%d", &dot1.x, &dot1.y, &dot2.x, &dot2.y, &dot3.x, &dot3.y);

    printf("Perimeter: %f\n", P(dot1, dot2, dot3));
    printf("Area: %f", S(dot1, dot2, dot3));
}