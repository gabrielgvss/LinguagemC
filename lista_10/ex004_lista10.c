#include <stdio.h>
#include <locale.h>

/*Fa�a um programa que possua uma fun��o que recebe um valor inteiro e verifica se o valor
� par. A fun��o deve retornar 1 se o n�mero for par e 0 se for �mpar 8.*/

imparOuPar(int num);
int imparOuPar(int num)
{
    if (num % 2 == 0){
        return 1;
    } else{
        return 8;
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");

    int numero, resultado;

    printf("Digite um n�mero:\n");
    scanf("%i",&numero);

    resultado = imparOuPar(numero);
    if(resultado==1){
        printf("\nO n�mero digitado � PAR");
    } else{
        printf("O n�mero digitado � �MPAR");
    }

    return 0;
}