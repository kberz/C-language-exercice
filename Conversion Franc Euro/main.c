#include <stdio.h>
#include <stdlib.h>
double franc = 6.55957;
double euro = 1.000;

double conversion(double euro)
{
euro *= franc;
return euro;
}

int main(int argc, char *argv[])
{
    printf("Tape la somme que tu veux convertir en franc :");
    scanf("%lf", &euro);

    printf("%lf", conversion(euro));

    return 0;
}
