#include <stdio.h>
#include <locale.h>
#include <string.h>

/*Entre com um nome e imprima o nome somente se a primeira letra do nome for �a� (maiuscula
ou min�scula).*/

main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[100];

    printf("Digite um nome:\n");
    gets(nome);
    if(nome[0]=='A'||nome[0]=='a'){
        printf("%s",nome);
    }
    else{
        printf("S� imprimirei o nome se come�ar com 'a' ou 'A'");
    }
}