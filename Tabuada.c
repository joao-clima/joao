#include<stdio.h>
#include<stdlib.h>

int main(){
int n,tab;
printf("Super Tabuada\n");
printf("=============\n\n\n");
printf("Calcular qual tabuada? ");
scanf("%d", &tab);
    if(tab<1 || tab>10){
        printf("Valor Inválido\n\n");
        exit(0);
    }
    for(n=1;n<=10;n++){
        printf("%d x %d = %d\n", tab, n, tab*n);
    }
}
