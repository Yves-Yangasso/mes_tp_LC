#include<stdio.h>

int main(){

    int n ;
    printf("Veuillez saisir un entier : ");
    scanf("%d", &n);

    (n>0) ? printf(" %d est positive ", n) : printf(" %d est  negative ", n);

return 0;
}
