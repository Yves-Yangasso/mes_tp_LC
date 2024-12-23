#include <stdio.h>

int main() {
    int mois, annee, jours;

    printf("Entrez le mois: ");
    scanf("%d", &mois);

    printf("Entrez l'annee : ");
    scanf("%d", &annee);

    if (mois < 1 || mois > 12) {
        printf("Mois invalide.\n");
    } else {
        if (mois == 2) {
            if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
                jours = 29;
            } else {
                jours = 28;
            }
        } else if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
            jours = 30;
        } else {
            jours = 31;
        }
        printf("Le mois %d de l'année %d a %d jours.\n", mois, annee, jours);
    }

    return 0;
}
