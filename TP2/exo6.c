
#include<stdio.h>
#include<math.h>

int main(){

    int a, b, c, max, min;

    printf("Veuillez saisir deux entiers : ");
    scanf("%d%d%d", &a,&b,&c);

    if(a>b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }

    if(c>max){
        max = c;
    }

    if(c<max){
        min = c;
    }

    printf(" max : %d  et min : %d ",max, min);

return 0;
}
