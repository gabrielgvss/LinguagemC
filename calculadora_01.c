#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    
    int a,b, resposta, adicao, subtracao, multiplicacao;
    float divisao;

    printf("Digite um número:\n");
    scanf("%i",&a);
    printf("Digite um segundo número:\n");
    scanf("%i",&b);

    printf("1 - ADIÇÃO\n2 - SUBTRAÇÃO\n3 - MULTIPLICAÇÃO\n4 - DIVISÃO");
    printf("\nDigite o número correspondente a operação que deseja realizar entre os números inseridos anteriormente:\n");
    scanf("%i",&resposta);

    adicao = a+b;
    subtracao = a-b;
    multiplicacao = a*b;
    divisao = (a / b);

    if (resposta == 1){
        printf("A soma entre %i + %i é igual a %i",a,b,adicao);
    }
    else if (resposta == 2){
        printf("A subtração entre %i - %i é igual a %i",a,b,subtracao);
    }
    else if (resposta == 3){
        printf("A multiplicação entre %i * %i é igual a %i",a,b,multiplicacao);
    }
    else if (resposta == 4){
        printf("A divisão entre %i por %i é igual a %.1f",a,b,divisao);
    }
    

    return 0;
}