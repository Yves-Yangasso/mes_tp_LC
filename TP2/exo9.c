#include <stdio.h>
#include <ctype.h>

int main() {
    char lettre;

    printf("Entrez une lettre : ");
    scanf(" %c", &lettre);

    if (islower(lettre)) {
        lettre = toupper(lettre);
    } else if (isupper(lettre)) {
        lettre = tolower(lettre);
    } else {
        printf("Vous n'avez pas saisi une lettre.\n");
        return 1;
    }

    printf("La lettre en casse inversée est : %c\n", lettre);

    return 0;
}
