#include <stdio.h>
#include <locale.h>
#include <string.h>

/*Faça um programa que receba uma palavra e a imprima de trás-para-frente*/

main(){
    setlocale(LC_ALL,"Portuguese");
    char palavra[40];

    printf("Digite uma palavra:\n");
    gets(&palavra[0]);

    //o -1 na condição inicial do contador serve para apagar o espaço em branco deixado no início devido ao \0
    for(int i=strlen(palavra)-1; i>=0; i--){
        printf("%c",palavra[i]);
    }

    
}