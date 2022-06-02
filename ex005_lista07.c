#include <stdio.h>
#include <locale.h>

/* 5.Implemente ou crie um programa em C que receba do usuário dez temperaturas em
graus Farenheit, transforme-as em graus Celsius e armazene os resultados em um
vetor. Terminada a entrada de dados, os valores armazenados devem ser
apresentados.
Obs.: A fórmula é C = 5/9 (F – 32). */

int main()
{
    setlocale(LC_ALL,"Portuguese");

    double temperatura_celsius[10], temperatura_fahrenheit[10];
    
    for (int i = 0; i<10; i++)
    {
        printf("Digite a %i° temperatura em graus Fahrenheit: ",i+1);
        scanf("%lf",&temperatura_fahrenheit[i]);
    }
    for (int j = 0; j<10; j++)
    {
        temperatura_celsius[j] = (temperatura_fahrenheit[j] - 32.0)/1.8;
    }
    for (int k = 0; k<10; k++)
    {
        printf("\n%.2lf° Fahrenheit equivalem a %.2lf° Celsius\n",temperatura_fahrenheit[k],temperatura_celsius[k]);
    }

}