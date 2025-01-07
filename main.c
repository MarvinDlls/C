#include <stdio.h>

int main(void)
{
    // maVariable : contenu de la variable (exemple maVariable = 15)
    // &maVariable : adresse où est stockée la variable
    signed char lettre = 'A';
    printf("Entrez une lettre : ");
    scanf("%c", &lettre);
    printf("Lettre choisie => %c\n", lettre);
    return 0;
}

/*
    %d: nombre entier (int)
    %f: nombre flottant (float)
    %c: caractère (char)
    %s: chaîne de caractères (texte)

    Exemple:
    const float PI = 3.14;
    printf("PI = %.2f\n", PI);

    int ageUser = 25;
    printf("Vous avez %d ans. \n", ageUser);

    // maVariable : contenu de la variable (exemple maVariable = 15)
    // &maVariable : adresse où est stockée la variable
    int ageUser = 0;
    printf("Quel âge avez-vous ? ");
    scanf("%d", &ageUser);
    printf("Vous avez %d ans. \n", ageUser);

    signed char lettre = 'A';
    printf("Entrez une lettre : ");
    scanf("%c", &lettre);
    printf("Lettre choisie => %c\n", lettre);
*/

/*
--OPÉRATEURS--


*/
