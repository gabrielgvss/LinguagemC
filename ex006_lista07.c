#include <stdio.h>
#include <locale.h>

/* 6.Leia um vetor de 10 posi��es e atribua valor 0 para todos os elementos que
possu�rem valores negativos. */

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float vetor[10];

    for (int i = 0; i< 10; i++) 
    {
        printf("Digite um n�mero: ");
        scanf("%f",&vetor[i]);

        if (vetor[i] < 0){
            vetor[i] = 0.0;
        }
    }
    for (int i = 0; i< 10; i++)
    {
        printf("%.1f\n",vetor[i]);
    }

}