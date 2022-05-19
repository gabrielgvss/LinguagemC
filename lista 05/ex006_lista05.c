#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float num, multiplicacao;
    int i;

    printf("Digite um número para ver sua tabuada de multiplicação:\n");
    scanf(" %f",&num);



    for (i = 1; i<=10; i++)
    {
        multiplicacao = num * i;
        printf("%.2f x %i = %.2f\n",num,i,multiplicacao);
    }


}
