#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");

    int matriz[3][3], soma_dp;//dp = diagonal principal --> [1][1] + [2][2] + ;

    //preenchimento da matriz i = linha, j = coluna
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d� linha, %d� coluna = ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if (i==j){
                soma_dp = soma_dp + matriz[i][j];
            }
            printf("\n%d� linha, %d� coluna = %i\n",i+1,j+1,matriz[i][j]);
        }
        }
    printf("A SOMA DA DIAGONAL PRINCIPAL DESSA MATRIZ � IGUAL A %d",soma_dp);
    }


