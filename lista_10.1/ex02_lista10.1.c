#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
/*2) Implementar a fun��o RaizQuadrada. Esta fun��o deve:
a) Receber um n�mero do tipo float como par�metro.
b) Retornar a raiz quadrada do n�mero recebido*/

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

    printf("Digite um n�mero para saber sua raiz quadrada:\n");
    scanf("%f",&num);

    printf("A raiz quadrada de %.2f � igual a %.2f",num,raizQuadrada(num));

    return 0;
}
