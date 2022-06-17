#include <stdio.h>
#include <locale.h>

/*Faça um programa que possua uma função que recebe um valor inteiro e verifica se o valor
é positivo, negativo ou zero. A função deve retornar 1 para valores positivos, -1 para
negativos e 0 para o valor 0.*/
int verificadorDeValores(int numero);
int verificadorDeValores(int numero)
{
    if(numero>0){
        return 1;
    } else if(numero<0){
        return -1;
    } else{
        return 0;
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");

    int num, verificar;

    printf("Digite um número para saber se este é positivo ou não:\n");
    scanf("%i",&num);

    verificar = verificadorDeValores(num);

    if (verificar == -1){
        printf("O número digitado é negativo");
    } else if (verificar == 1){
        printf("O número digitado é positivo");
    } else {
        printf("O número digitado é nulo, ou seja, igual a 0");
    }


    return 0;
}