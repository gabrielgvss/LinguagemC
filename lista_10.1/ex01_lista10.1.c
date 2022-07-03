#include <stdio.h>
#include <locale.h>
#include <windows.h>

/*1) Fazer uma fun��o que:
a. recebe como par�metros: m�dia final do aluno (0 a 100), n�mero de faltas e
quantidade de horas-aula no semestre
b. retorna 1 se o aluno foi aprovado, de acordo com os crit�rios do IFMA, e 0
caso contr�rio.
Crit�rios: m�dia final maior ou igual a 7 e frequ�ncia maior ou igual a 75%
Fazer a chamada desta fun��o no main, recebendo valores relativos a um
aluno e informando se ele foi aprovado ou n�o. */

int situacaoAluno(float mediaFinal, float frequencia, float qtd_horasAula);
int situacaoAluno(float mediaFinal, float frequencia, float qtd_horasAula)
{
    if(mediaFinal>=7 && frequencia/qtd_horasAula*100 >= 75)
    {
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome_aluno[100];
    float mediaF;
    float n_horasAula, qtd_horaAula, frequenciaTotal;
    int retorno;


    //input de dados:
    printf("\n-------------------- SITUA��O FINAL ------------------------\n");
    printf("Digite o nome do aluno:\n");
    gets(nome_aluno);

    printf("Digite a m�dia final do aluno %s:\n",nome_aluno);
    scanf("%f",&mediaF);
    getchar();

    printf("Digite a quantidade de horas aula registradas do aluno %s:\n",nome_aluno);
    scanf("%f",&n_horasAula);
    getchar();

    printf("Digite a quantidade total de horas do semestre:\n");
    scanf("%f",&qtd_horaAula);

    frequenciaTotal = ((n_horasAula/qtd_horaAula)*100);


    //chamada da fun��o:
    retorno = situacaoAluno(mediaF, n_horasAula, qtd_horaAula);
    if(retorno == 1){
        printf("O aluno %s est� aprovado",nome_aluno);
        printf("\nM�dia final = %.2f",mediaF);
        printf("\nQuantidade de horas aula do aluno registradas = %.1f \n %.2f por cento de frequ�ncia total",n_horasAula,frequenciaTotal);
    }else{
        printf("O aluno %s est� reprovado",nome_aluno);
        printf("\nM�dia final = %.2f",mediaF);
        printf("\nQuantidade de horas aula do aluno registradas = %.1f \n %.2f por cento de frequ�ncia total",n_horasAula,frequenciaTotal);
        }

    return 0;
}
