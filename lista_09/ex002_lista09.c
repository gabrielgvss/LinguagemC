#include <stdio.h>
#include <locale.h>
#include <string.h>

/* Faça um programa que receba do usuário uma string. O programa imprime a string
sem suas vogais.*/
main(){
    setlocale(LC_ALL,"Portuguese");
    char vogais[40]={'a','e','i','o','u','A','E','I','O','U'};
    char string[40];

    printf("Digite uma string (conjunto de caracteres):\n");
    gets(&string[0]);

    for(int i=0; i<strlen(string);i++){
        for(int j=0; j<10; j++){
        if(string[i]==vogais[j]){
            string[i] = ' ';
            }
        }
        printf("%c",string[i]);
    }
    
}