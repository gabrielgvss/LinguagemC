#include <stdio.h>
#include <locale.h>
#include <string.h>

/* Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u)
possui essa palavra. Entre com um caractere (vogal ou consoante) e substitua
todas as vogais da palavra dada por esse caractere.*/
main(){
    setlocale(LC_ALL,"Portuguese");
    char vogais[40]={'a','e','i','o','u','A','E','I','O','U'};
    char palavra[40], caracter;
    int contador_de_vogais = 0;

    printf("Digite uma palavra qualquer:\n");
    gets(&palavra[0]);

    printf("Digite um caracter qualquer para substituir as vogais da palavra digitada:\n");
    scanf("%c",&caracter);

    for(int i=0; i<strlen(palavra);i++){
        for(int j=0; j<10; j++){
        if(palavra[i]==vogais[j]){
            contador_de_vogais++;
            palavra[i] = caracter;
            }
        }
        printf("%c",palavra[i]);
    }
    printf("\nA quantidade total de vogais que havia na palavra digitada era igual a %i",contador_de_vogais);
}