#include <stdio.h>
#include <locale.h>

/* 2.Dada uma sequência de n números, imprimi-la na ordem inversa à da leitura. */

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int quantidade;

    printf("Digite a quantidade de valores que você deseja digitar:\n");
    scanf("%i",&quantidade);

    float numeros[quantidade];

    for (int i = 0; i < quantidade; i++)
    {
        printf("Digite o %i° número:\n",i+1);
        scanf("%f",&numeros[i]);
        system("cls");
    }

    for (int j = quantidade; j > 0; j--)
    {
        printf("O %i° número digitado foi %.2f\n",j,numeros[j-1]);
    }
    
}