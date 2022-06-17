#include <stdio.h>
#include <locale.h>
#include <math.h>

/*Escreva um programa em C com uma função que calcule e retorne a distância entre dois
pontos A( x1, y1) e B(x2, y2). Todos os números e valores de retorno devem ser do tipo float.*/

float distanciaEntrePontos(float x1, float y1, float x2, float y2)
{
    //d = sqr((x2 – x1)² + (y2 – y1)²) ;
    float distancia;
    distancia = sqrtf( powf((x2-x1),2) + powf((y2-y1),2) );

    return distancia;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float xA, yA, xB, yB; //coordenadas dos pontos 

    printf("Digite o valor da coordenada x do ponto A:\n");
    scanf("%f",&xA);
    printf("Digite o valor da coordenada y do ponto A:\n");
    scanf("%f",&yA);
    printf("Digite o valor da coordenada x do ponto B:\n");
    scanf("%f",&xB);
    printf("Digite o valor da coordenada y do ponto B:\n");
    scanf("%f",&yB);

    printf("\nA distância entre os pontos A e B é igual a %.2f",distanciaEntrePontos(xA,xB,yA,yB));

}