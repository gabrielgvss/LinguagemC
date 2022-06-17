#include <stdio.h>
#include <locale.h>

/*Faça um programa que possua uma função que receba 3 notas de um aluno e uma letra. Se
a letra for A a função retorna a média aritmética das notas do aluno, se for P, a sua média
ponderada (pesos: 5, 3 e 2)*/

float mediaNotas(float nota1, float nota2, float nota3, char resposta);
float mediaNotas(float nota1, float nota2, float nota3, char resposta)
{
    if (resposta=='A'||resposta == 'a')
    {
        float mediaAritmetica = ((nota1+nota2+nota3)/3);
        return mediaAritmetica;
    }
    else if (resposta == 'P'||resposta == 'p')
    {
        float mediaPonderada = ((nota1*5 + nota2*3 + nota3*2)/ 10);
        return mediaPonderada;
    }

}

main()
{
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, n3, media;
    char ap;

    printf("Digite suas notas:\n");
    printf("Nota 1 > ");
    scanf("%f",&n1);
    printf("Nota 2 > ");
    scanf("%f",&n2);
    printf("Nota 3 > ");
    scanf("%f",&n3);
    getchar();

    printf("\nDigite A para ver a média aritmética de suas notas ou P para ver a ponderada > ");
    scanf("%c",&ap);

    media = mediaNotas(n1, n2, n3, ap);

    printf("\nA média escolhida foi igual a > %.2f ",media);

    return 0;

}