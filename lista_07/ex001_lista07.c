#include <stdio.h>
#include <locale.h>

/* 1.Dado um vetor v = [10, 20, 30, 40, 50], mostre na tela o conte�do do vetor v em
sequ�ncia. */

int main()
{
    int vetor[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", vetor[i]);
    }
}
