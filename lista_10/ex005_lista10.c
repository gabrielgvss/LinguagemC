#include <stdio.h>
#include <locale.h>

/*Fa�a um programa que possua uma fun��o que recebe um valor inteiro e verifica se o valor
� positivo, negativo ou zero. A fun��o deve retornar 1 para valores positivos, -1 para
negativos e 0 para o valor 0.*/
int verificadorDeValores(int numero);
int verificadorDeValores(int numero)
{
    if(numero>0){
        return 1;
    } else if(numero<0){
        return -1;
    } else{
        return 0;
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");

    int num, verificar;

    printf("Digite um n�mero para saber se este � positivo ou n�o:\n");
    scanf("%i",&num);

    verificar = verificadorDeValores(num);

    if (verificar == -1){
        printf("O n�mero digitado � negativo");
    } else if (verificar == 1){
        printf("O n�mero digitado � positivo");
    } else {
        printf("O n�mero digitado � nulo, ou seja, igual a 0");
    }


    return 0;
}