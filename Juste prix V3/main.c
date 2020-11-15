#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int reponse = 0;
    int compteur = 0;
    int retry = 0;
    int mode_jeu;
    int difficulter;
    printf("Vous avez le choix entre trois types de difficultés:\n1-Facile : Nombre mystère de 0 à 100\n2-Difficile : Nombre mystère de 0 à 1000\n3-Très difficile : Nombre mystère de 0 à 10 000\n");
    scanf("%d", &difficulter);
    int nombreMystere;

    if (difficulter == 1)
        {//Déclaration des variables
        int MAX = 100, MIN = 1;
        srand(time(NULL));
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        printf("Vous avez choisis le mode de difficulté niveau 1.\nLes nombres vont de 0 à %d\n", MAX);
        }

    if (difficulter == 2)
        {
        //Déclaration des variables
        int MAX = 1000, MIN = 1;
        srand(time(NULL));
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        printf("Vous avez choisis le mode de difficulté niveau 2.\nLes nombres vont de 0 à %d\n", MAX);
        }

    if (difficulter == 3)
        {//Déclaration des variables
        int MAX = 10000, MIN = 1;
        srand(time(NULL));
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        printf("Vous avez choisis le mode de difficulté niveau 3.\nLes nombres vont de 0 à %d\n", MAX);
        }


        //Séléction mode de jeu solo ou duo
        printf("Vous pouvez choisir votre mode de jeu:\n1-Mode solo \n2-Mode duo\n");
        scanf("%d", &mode_jeu);

        switch(mode_jeu)
        {
        case 1:
            do //Boucle du mode solo
            {
                printf("Vous avez bien choisis le mode solo !\nVous pouvez commencer à jouer au juste prix contre l'ordinateur, bonne chance...\n");
                scanf("%d", &reponse);
                if (reponse == nombreMystere)
                printf("Bravo tu as eu la bonne réponse !");
                else if (reponse < nombreMystere)
                printf("tu es en dessous de la bonne réponse\n");
                else if (reponse > nombreMystere)
                printf("Tu es au dessu de la bonne réponse\n");


                compteur = compteur + 1;
                printf("Ton compteur est de %d/8 \n", compteur);


                if (compteur == 8)
                {
                printf("Fin du biz car tu as perdu trop de fois !\n");
                printf("Si tu veux recommencer tappe 1:");
                scanf("%d", &retry);
                }


                if (retry == 1)
                {
                printf("Tu veux continuer à souffir c'est ton choix\n");
                retry --;
                }
                else if (retry > 1)
                {
                printf("Fin du jeu merci d'avoir jouer !");
                retry ++;
                }

                if (compteur >= 8)
                {
                compteur = compteur - 8;
                }

            }while (reponse != nombreMystere || compteur > 8 || retry > 1);
        break;

        case 2:   //mode de jeu duo
            printf("Vous avez bien choisi le mode duo, Le joueur 1 peux rentrer le nombre mystère !\n");
            scanf("%d", &nombreMystere);
            do
            {
                printf("Le joueur 2 peux jouer\n");
                scanf("%d", &reponse);
                if (reponse == nombreMystere)
                printf("Bravo tu as eu la bonne réponse !");
                else if (reponse < nombreMystere)
                printf("tu es en dessous de la bonne réponse\n");
                else if (reponse > nombreMystere)
                printf("Tu es au dessu de la bonne réponse\n");


                compteur = compteur + 1;
                printf("Ton compteur est de %d/8 \n", compteur);


                if (compteur == 8)
                {
                printf("Fin du biz car tu as perdu trop de fois !\n");
                printf("Si tu veux recommencer tappe 1:");
                scanf("%d", &retry);
                }


                if (retry == 1)
                {
                printf("Tu veux continuer à souffir c'est ton choix\n");
                retry --;
                }
                else if (retry > 1)
                {
                printf("Fin du jeu merci d'avoir jouer !");
                retry ++;
                }

                if (compteur >= 8)
                {
                compteur = compteur - 8;
                }

            }while (reponse != nombreMystere || compteur > 8 || retry > 1);
        break;

        }
        return 0;
    }
