#include <stdio.h>

int main() {
    int heures, minutes, secondes;
    char deux_points;

    printf("Entrez l'heure (hh:mm:ss) : ");
    if (scanf("%d:%d:%d", &heures, &minutes, &secondes) != 3) {
        printf("Erreur de format.\n");
        return 1;
    }

    secondes++;

    if (secondes == 60) {
        secondes = 0;
        minutes++;
    }

    if (minutes == 60) {
        minutes = 0;
        heures++;
    }

    if (heures == 24) {
        heures = 0;
    }

    printf("L'heure une seconde plus tard : %02d : %02d: %02d\n", heures, minutes, secondes);

    return 0;
}
