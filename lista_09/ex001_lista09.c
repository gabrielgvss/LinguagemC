#include <stdio.h>
#include <locale.h>
#include <string.h>

/*Fa�a um programa que receba uma palavra e a imprima de tr�s-para-frente*/

main(){
    setlocale(LC_ALL,"Portuguese");
    char palavra[40];

    printf("Digite uma palavra:\n");
    gets(&palavra[0]);

    //o -1 na condi��o inicial do contador serve para apagar o espa�o em branco deixado no in�cio devido ao \0
    for(int i=strlen(palavra)-1; i>=0; i--){
        printf("%c",palavra[i]);
    }

    
}