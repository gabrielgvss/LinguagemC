#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
/*3. Fazer uma função que recebe um mês e um ano como parâmetros e retorna o
número de dias daquele mês daquele ano. Dica: um ano é bissexto quando é
múltiplo de 4 e não múltiplo de 100, ou também quando é múltiplo de 400.*/
int diasDoMes();
int diasDoMes(int mes, int ano)
{
    if(ano%4==0||ano%400==0)
    {
        if((mes % 2 != 0 && mes<8)||(mes % 2 == 0 && mes>=8))//1,3,5,7,8,10,12;
        {
            return 31;

        }else if((mes % 2 == 0 && mes>2 && mes<7)||(mes % 2 != 0 && mes>8))//4,6,9,11;
        {
            return 30;

        }else{
            return 29;//2
        }
    }else
    {
        if((mes % 2 != 0 && mes<8)||(mes % 2 == 0 && mes>=8))//1,3,5,7,8,10,12;
        {
            return 31;

        }else if((mes % 2 == 0 && mes>2 && mes<7)||(mes % 2 != 0 && mes>8))//4,6,9,11;
        {
            return 30;

        }else{
            return 28;//2
        }
    }
}


int main()
{
    int mes, ano;

    setlocale(LC_ALL,"Portuguese");

    do{
    printf("Digite um ano:\n");
    scanf("%i",&ano);
    getchar();

    printf("Digite um número correspondente a um dos doze meses deste ano (1-12):\n");
    scanf("%i",&mes);

    printf("A quantidade de dias do mês digitado correspondente ao ano de %i foi igual a %i\n",ano,diasDoMes(mes,ano));

    system("pause");
    system("cls");
    printf("\nPara encerrar o loop digite 0 no input de ano\n\n\n");
    }while(ano != 0);

    return 0;
}
