#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nombre_de_vie = 5, niveau = 1, point_de_degats = 3, nombre_de_vie_actu = 0;
    printf("Vous avez %d points de vie et tu es niveau %d\n", nombre_de_vie, niveau);

    nombre_de_vie_actu = nombre_de_vie - point_de_degats;
    printf("Aie tu as pris un vilain coup sur la tête il"
    "te reste plus que %d points de vie\n... dommage bro\n", nombre_de_vie_actu);

    //Age utilisateur
    int age = 0;
    printf("Quel age as-tu ?\n");
    scanf("%d",&age);

        if (age > 18)
        {
        printf("Tu es majeur car tu as %d ans\n", age);
        }
        else if (age == 18)
        {
        printf("Tu es majeur de justesse avec tes %d ans", age);
        }
        else
        {
        printf("Tu es mineur car tu as %d ans\n", age);
        }

    return 0;

}
