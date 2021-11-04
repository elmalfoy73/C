#include <stdio.h>

int main() {
    enum OS {Symbian, Embedded_Linux, Windows_CE_VxWorks, QNX};
    enum OS myOS;
    myOS = Symbian;
    printf("OS: %d\n\n", myOS);

    struct square
    {
        int lenght;
    };
    struct square newSquare = {5};
    int perimetr = newSquare.lenght * 4;
    int area = newSquare.lenght * newSquare.lenght;
    printf("Perimetr: %d, \n", perimetr);
    printf("Area: %d\n\n", area);

    struct printer
    {
        unsigned ready : 1;
        unsigned notEnoughtToner : 1;
        unsigned OPCdrumBreak : 1;
        unsigned noPapper : 1;
    };
    union number{
        struct printer myPrinter;
        int num;
    }reader;
    scanf("%x", &reader.num);
    printf("Ready: %u\n", reader.myPrinter.ready);
    printf("Not enought toner: %u\n", reader.myPrinter.notEnoughtToner);
    printf("OPCdrum break: %u\n", reader.myPrinter.OPCdrumBreak);
    printf("No papper: %u\n", reader.myPrinter.noPapper);
}
