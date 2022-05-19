#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");

float num;

do{
    printf("Digite um número de 1 a 10:\n");
    scanf(" %f",&num);

    if (num<1 || num>10){
        printf("\nNÚMERO INVÁLIDO\n");
    }
    else {
        printf("\nNÚMERO VÁLIDO\n\n");
    }

}while(num<1 || num>10);

}
