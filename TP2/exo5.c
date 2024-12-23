
#include<stdio.h>

int main(){

    int n ;
    printf("Veuillez saisir un entier : ");
    scanf("%d", &n);

    if(n==0){
         printf(" %d est  nul ", n);
    }else if(n==1 || n==2){
         printf(" %d est  petit ", n);
    }else if(n==3){
         printf(" %d est  MOYEN ", n);
    }else if(n==5){
         printf(" %d est  GRAND ", n);
    }else{
         printf(" %d est   HORS NORME", n);
    }

return 0;
}
