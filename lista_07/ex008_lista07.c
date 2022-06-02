#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");

    int matriz[5][3], maior_valor = -9, linha , coluna;

    //preenchimento da matriz i = linha, j = coluna
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%dª linha, %dª coluna = ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    //contagem > 10
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("\n%dª linha, %dª coluna = %i\n",i+1,j+1,matriz[i][j]);
            if(matriz[i][j] > maior_valor){
                maior_valor = matriz[i][j];
                linha = i+1;
                coluna = j+1;
        }
        }
    }
    printf("\n\nO maior valor digitado foi %i\nTal valor encontra-se localizado na linha %i e na coluna %i",maior_valor,linha,coluna);

    return 0;
}

