#include <stdio.h>
#include <locale.h>

/* 1.Dado um vetor v = [10, 20, 30, 40, 50], mostre na tela o conteúdo do vetor v em
sequência. */

int main()
{
    int vetor[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", vetor[i]);
    }
}
