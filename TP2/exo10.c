#include <stdio.h>
#include <ctype.h>

int main() {
    char caractere;

    printf("Entrez un caract�re : ");
    scanf(" %c", &caractere);

    if (isalpha(caractere)) {
        if (islower(caractere)) {
            printf("Vous avez saisi une lettre minuscule.\n");
        } else {
            printf("Vous avez saisi une lettre majuscule.\n");
        }
    } else if (isdigit(caractere)) {
        printf("Vous avez saisi un chiffre.\n");
    } else {
        printf("Vous avez saisi un caract�re sp�cial.\n");
    }

    return 0;
}
