#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");

    int matriz[4][4], contagem = 0;

    //preenchimento da matriz i = linha, j = coluna
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%dª linha, %dª coluna = ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

     //contagem > 10
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++) {
            if(matriz[i][j] > 10)
                contagem++;
        }
    }


    printf("\n\n Existem na matriz %d números maiores que 10.", contagem);

    return 0;
}
