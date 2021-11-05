#include <stdio.h>

//an area (BrE\AmE; general) – площадь (количество пространства, которое покрывает какая-либо плоская поверхность или фигура: The area of a triangle
struct square
{
    int x1;
    int y1;
    int lenght;
};
int Area(int lengh)
{
    return lengh*lengh;
}
int Perimetr(int lengh)
{
    return lengh*4;
}

struct printer
{
    unsigned ready : 1;
    unsigned notEnoughtToner : 1;
    unsigned OPCdrumBreak : 1;
    unsigned noPapper : 1;
};

int main() {
    enum OS {Symbian, Embedded_Linux, Windows_CE_VxWorks, QNX};
    enum OS myOS;
    myOS = Symbian;
    printf("OS: %d\n\n", myOS);

    struct square newSquare = {1,1, 5};
    int perimetr = Perimetr(newSquare.lenght);
    int area = Area(newSquare.lenght);
    printf("Perimetr: %d\n", perimetr);
    printf("Area: %d\n\n", area);

    union number{
        struct printer myPrinter;
        int num;
    }reader;
    scanf("%x", &reader.num);
    printf("Ready: %u\n", reader.myPrinter.ready);
    printf("Not enought toner: %u\n", reader.myPrinter.notEnoughtToner);
    printf("OPCdrum break: %u\n", reader.myPrinter.OPCdrumBreak);
    printf("No papper: %u\n", reader.myPrinter.noPapper);

    return 0;
}
