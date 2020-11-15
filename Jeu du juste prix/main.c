#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAX = 100, MIN = 1;
    srand(time(NULL));
    int nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    int reponse = scanf("%d", &reponse);

    if (reponse == nombreMystere)
    printf("Bravo tu as eu la bonne réponse !");
    else if (reponse < nombreMystere)
    printf("tu es en dessous de la bonne réponse\n");
    else
    printf("Tu es au dessu de la bonne réponse\n");

    while (reponse != nombreMystere)
    {
    scanf("%d", &reponse);
    if (reponse == nombreMystere)
    printf("Bravo tu as eu la bonne réponse !");
    else if (reponse < nombreMystere)
    printf("tu es en dessous de la bonne réponse\n");
    else if (reponse > nombreMystere)
    printf("Tu es au dessu de la bonne réponse\n");
    }


    return 0;
}
