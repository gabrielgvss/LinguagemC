#include <stdio.h>
#include <locale.h>

/* 3.Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui. */

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int vetor[10], contador_de_pares = 0;

    for (int i = 0; i<10 ; i++)
    {
        printf("Digite um número:\n");
        scanf("%i",&vetor[i]);
        system("cls");
    }

    for (int j = 0; j<10; j++)
    {
        if (vetor[j] % 2 == 0){
            printf("O número %i é par\n",vetor[j]);
            contador_de_pares +=1;
        }
    }

    printf("\nA quantidade total de números pares digitados foi igual a %i.",contador_de_pares);

}