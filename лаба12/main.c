#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *filename = argv[1];
    freopen(filename, "w", stdout);
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);

    printf("%d", a + b);
    return 0;
}