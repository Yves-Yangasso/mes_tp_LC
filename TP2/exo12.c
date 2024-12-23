#include <stdio.h>

int main() {
    int jour, mois, annee;
    int joursParMois[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Saisissez une date (jj mm aaaa) : ");
    if (scanf("%d %d %d", &jour, &mois, &annee) != 3) {
        printf("Erreur de saisie\n");
        return 1;
    }

    if (mois < 1 || mois > 12) {
        printf("Mois invalide\n");
        return 1;
    }

    int jours = joursParMois[mois - 1];
    if (mois == 2 && ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0))) {
        jours++;
    }

    if (jour < 1 || jour > jours) {
        printf("Jour invalide\n");
    } else {
        printf("La date est valide.\n");
    }

    return 0;
}
