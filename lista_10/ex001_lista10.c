#include <stdio.h>
#include <locale.h>

/*Escreva um programa em C com uma fun��o que receba dois n�meros inteiros e retorne o
menor n�mero*/

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

    printf("Digite um n�mero:\n");
    scanf("%i",&numero1);
    printf("Digite outro n�mero;\n");
    scanf("%i",&numero2);

    if(menorNumero(numero1,numero2)!=0)
    {
        printf("\nO menor n�mero digitado foi %i",menorNumero(numero1,numero2));
    } else{
        printf("OS DOIS N�MEROS DIGITADOS S�O IGUAIS");
    }

}