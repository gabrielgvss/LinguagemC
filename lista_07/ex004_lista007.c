#include <stdio.h>
#include <locale.h>

/* 4.Faça um programa que leia um vetor de 10 posições e verifique se existem valores
iguais e os escreva na tela. */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float vetor[10];
    int contador_de_repeticoes = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int k = i + 1; k < 10; k++)
        {
            if (vetor[i] == vetor[k])
            {
                printf("o VALOR %.2f SE REPETE!\n", vetor[i]);
            }
        }
    }
}