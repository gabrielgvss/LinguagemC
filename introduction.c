#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int idade = 18;
    float altura = 1.70;
    char nome[30] = "Gabriel";
    char cidade[30] = "S�o Lu�s";
    char estado[30] = "Maranh�o";
    char paiz[30] = "Brasil";

    printf("Meu nome � %s , tenho %i anos e altura de %.1f metros. Moro em %s do %s, no %s",nome, idade, altura, cidade, estado, paiz);
    return 0;
}
