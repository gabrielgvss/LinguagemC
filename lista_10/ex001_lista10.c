#include <stdio.h>
#include <locale.h>

/*Escreva um programa em C com uma função que receba dois números inteiros e retorne o
menor número*/

int menorNumero(int num1 , int num2)
{
    if (num1<num2){
        return num1;
    } else if (num1>num2){
        return num2;
    } else{
        return 0;
    }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int numero1, numero2;

    printf("Digite um número:\n");
    scanf("%i",&numero1);
    printf("Digite outro número;\n");
    scanf("%i",&numero2);

    if(menorNumero(numero1,numero2)!=0)
    {
        printf("\nO menor número digitado foi %i",menorNumero(numero1,numero2));
    } else{
        printf("OS DOIS NÚMEROS DIGITADOS SÃO IGUAIS");
    }

}