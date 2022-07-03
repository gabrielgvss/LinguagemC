#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
/*2) Implementar a função RaizQuadrada. Esta função deve:
a) Receber um número do tipo float como parâmetro.
b) Retornar a raiz quadrada do número recebido*/

float raizQuadrada(float numero);
float raizQuadrada(float numero)
{
    float raiz = sqrt(numero);
    return raiz;
}

int main()
{
    float num;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite um número para saber sua raiz quadrada:\n");
    scanf("%f",&num);

    printf("A raiz quadrada de %.2f é igual a %.2f",num,raizQuadrada(num));

    return 0;
}
