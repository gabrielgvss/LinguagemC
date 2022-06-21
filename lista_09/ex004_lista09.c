#include <stdio.h>
#include <locale.h>
#include <string.h>

/*Faça um programa que leia um nome e imprima as 4 primeiras letras do nome.*/

main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[40];

    printf("Digite um nome: ");
    gets(nome);

    for(int i = 0; i<4; i++){
        printf("%iª letra do nome: %c\n",i+1,nome[i]);
    }    
    
}