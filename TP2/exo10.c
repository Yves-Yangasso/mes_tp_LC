#include <stdio.h>
#include <ctype.h>

int main() {
    char caractere;

    printf("Entrez un caractère : ");
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
        printf("Vous avez saisi un caractère spécial.\n");
    }

    return 0;
}
