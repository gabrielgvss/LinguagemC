#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");

    float soma = 0.0, num;

    for(int i = 1; i<=10 ; i++){
        printf("Digite um n�mero:\n");
        scanf("%f",&num);

        soma = soma + num;


    }
    printf("A soma entre os n�meros digitados � igual a %.0f",soma);
}




