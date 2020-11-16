#include <stdio.h>
#include <stdlib.h>

int choix()
{
    int menu_choiser = 0;

    while (menu_choiser < 1 || menu_choiser > 2)
    {
    printf("==Menu==\n");
    printf("1-Convertisseur Euros/Francs\n");
    printf("2-Convertisseur Francs/Euros\n");
    scanf("%d", &menu_choiser);
    }


    return menu_choiser;
}
double euros = 1.00;
const double francs = 6.55957;
double implem_francs = 6.55957;

double conversionEurosFrancs(double euros)
{
euros *= francs;
return euros;
}

double conversionFrancsEuros(double implem_francs)
{
implem_francs = implem_francs * euros / francs;
return implem_francs;
}


int main(int argc, char * argv[])
{
    switch(choix())
    {
    case 1:
    printf("Tu as choisis le convertisseur Euros/Francs\nChoisis le nombre que tu souhaite convertir:\n");
    scanf("%lf", &euros);
    printf("%lf", conversionEurosFrancs(euros));
    break;

    case 2:
    printf("Tu as choisis le convertisseur Francs/Euros\nChoisis le nombre que tu souhaite convertir:\n");
    scanf("%lf", &implem_francs);
    printf("%lf", conversionFrancsEuros(implem_francs));
    break;
    }

    return 0;
}
