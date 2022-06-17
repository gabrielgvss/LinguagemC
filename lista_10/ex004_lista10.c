#include <stdio.h>
#include <locale.h>

/*Faça um programa que possua uma função que recebe um valor inteiro e verifica se o valor
é par. A função deve retornar 1 se o número for par e 0 se for ímpar 8.*/

imparOuPar(int num);
int imparOuPar(int num)
{
    if (num % 2 == 0){
        return 1;
    } else{
        return 8;
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");

    int numero, resultado;

    printf("Digite um número:\n");
    scanf("%i",&numero);

    resultado = imparOuPar(numero);
    if(resultado==1){
        printf("\nO número digitado é PAR");
    } else{
        printf("O número digitado é ÍMPAR");
    }

    return 0;
}