#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");

float num;

do{
    printf("Digite um n�mero de 1 a 10:\n");
    scanf(" %f",&num);

    if (num<1 || num>10){
        printf("\nN�MERO INV�LIDO\n");
    }
    else {
        printf("\nN�MERO V�LIDO\n\n");
    }

}while(num<1 || num>10);

}
