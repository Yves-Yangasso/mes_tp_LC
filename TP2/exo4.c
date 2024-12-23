#include<stdio.h>
#include<math.h>

int main(){

    int a, b;

    printf("Veuillez saisir un entier A: ");
    scanf("%d", &a);

    printf("Veuillez saisir un entier B: ");
    scanf("%d", &b);

    ((a>0 || b >0) || (a<0 && b <0)) ? printf("Le produit %d et %d est positif", a, b) :
    (a<0 || b < 0) ? printf("Le produit %d et %d est  negative ", a, b):
            printf("Le produit %d et %d est  nul ", a, b);


return 0;
}
