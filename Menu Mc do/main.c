#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int menu_choiser;
    printf("==Menu Mcdo==\n");
    printf("1-Mc Chicken\n");
    printf("2-Mc Nugget\n");
    printf("3-Mc Burger\n");
    printf("4-Mc César\n");
    scanf("%d", &menu_choiser);

    switch(menu_choiser)
    {
    case 1:
    printf("Vous avez bien choisi le Mc Chicken");
    break;
    case 2:
    printf("Vous avez bien choisi le Mc Nugget\n");
    break;
    case 3:
    printf("Vous avez bien choisi le Mc Burger\n");
    break;
    case 4:
    printf("Vous avez bien choisi le Mc César\n");
    break;
    default:
    printf("T'es con ou quoi j'ai dis entre 1 et 4 il n'y a rien de compliqué...");
    break;
    }


    return 0;

}
