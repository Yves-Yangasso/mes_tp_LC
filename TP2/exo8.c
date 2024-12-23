#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, x1, x2;

    printf("Entrez les coefficients a, b et c de l'equation ax^2 + bx + c = 0 :\n");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {

        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les solutions sont : x1 = %.2f et x2 = %.2f\n", x1, x2);
    } else if (discriminant == 0) {

        x1 = -b / (2 * a);
        printf("La solution double est : x = %.2f\n", x1);
    } else {

        printf("Il n'y a pas de solution reelle.\n");
    }

    return 0;
}
