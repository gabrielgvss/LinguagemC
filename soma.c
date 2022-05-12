#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");

    float soma = 0.0, num;

    for(int i = 1; i<=10 ; i++){
        printf("Digite um número:\n");
        scanf("%f",&num);

        soma = soma + num;


    }
    printf("A soma entre os números digitados é igual a %.0f",soma);
}




