#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAX = 100, MIN = 1;
    srand(time(NULL));
    int nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    int reponse = 0;
    int compteur = 0;
    int stoploose = 0;

    while (reponse != nombreMystere || compteur >= 8 || stoploose == 1)
    {
        scanf("%d", &reponse);
        if (reponse == nombreMystere)
        printf("Bravo tu as eu la bonne réponse !");
        else if (reponse < nombreMystere)
        printf("tu es en dessous de la bonne réponse\n");
        else if (reponse > nombreMystere)
        printf("Tu es au dessu de la bonne réponse\n");


        compteur = compteur + 1;
        printf("Tu es as %d/8 try again\n", compteur);
        printf("Si tu veux arreter ici tape 1:");
        scanf("%d", &stoploose);
        if (compteur == 8)
        printf("Fin du biz car tu as perdu trop de fois !");

        if (stoploose > 1)
        printf("Tu veux continuer à souffir c'est ton choix\n");

        else if (stoploose == 1)
        {
        printf("Tu as abandonner, retourne te coucher !\n");
        }

    }

    return 0;
}
