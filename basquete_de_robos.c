#include <stdio.h>

int main(){
    int distancia, pontuacao;

    printf("Digite a dist�ncia(em cm) que o rob� se encontra em rela��o a cesta: ");
    scanf("%i",&distancia);

    if(distancia<=800){
        pontuacao = 1;
        printf("Sua pontua��o foi %i pontos",pontuacao);
    }
    else if(distancia > 800 && distancia <= 1400){
        pontuacao = 2;
        printf("Sua pontua��o foi %i pontos",pontuacao);
    }
    else if(distancia > 1400 && distancia <= 2000){
        pontuacao = 3;
        printf("Sua pontua��o foi %i pontos",pontuacao);
    }
    else{
        printf("Por favor, reinicie o programa e insira um valor v�lido de 0 a 2000");
    }

    return 0;
}
