#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    
    int a,b, resposta, adicao, subtracao, multiplicacao;
    float divisao;

    printf("Digite um n�mero:\n");
    scanf("%i",&a);
    printf("Digite um segundo n�mero:\n");
    scanf("%i",&b);

    printf("1 - ADI��O\n2 - SUBTRA��O\n3 - MULTIPLICA��O\n4 - DIVIS�O");
    printf("\nDigite o n�mero correspondente a opera��o que deseja realizar entre os n�meros inseridos anteriormente:\n");
    scanf("%i",&resposta);

    adicao = a+b;
    subtracao = a-b;
    multiplicacao = a*b;
    divisao = (a / b);

    if (resposta == 1){
        printf("A soma entre %i + %i � igual a %i",a,b,adicao);
    }
    else if (resposta == 2){
        printf("A subtra��o entre %i - %i � igual a %i",a,b,subtracao);
    }
    else if (resposta == 3){
        printf("A multiplica��o entre %i * %i � igual a %i",a,b,multiplicacao);
    }
    else if (resposta == 4){
        printf("A divis�o entre %i por %i � igual a %.1f",a,b,divisao);
    }
    

    return 0;
}