#include <stdio.h>

int main(){
    int distancia, pontuacao;

    printf("Digite a distância(em cm) que o robô se encontra em relação a cesta: ");
    scanf("%i",&distancia);

    if(distancia<=800){
        pontuacao = 1;
        printf("Sua pontuação foi %i pontos",pontuacao);
    }
    else if(distancia > 800 && distancia <= 1400){
        pontuacao = 2;
        printf("Sua pontuação foi %i pontos",pontuacao);
    }
    else if(distancia > 1400 && distancia <= 2000){
        pontuacao = 3;
        printf("Sua pontuação foi %i pontos",pontuacao);
    }
    else{
        printf("Por favor, reinicie o programa e insira um valor válido de 0 a 2000");
    }

    return 0;
}
