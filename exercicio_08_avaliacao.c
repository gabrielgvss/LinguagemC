#include <stdio.h>
#include <locale.h>
#include <windows.h>

main(void)
{
    setlocale(LC_ALL,"Portuguese");
    /* Faça um programa que leia um vetor com 5 inteiros. Exiba um menu de opções, execute a ação escolhida e exiba o resultado. O programa deve ser capaz de solicitar ao usuário se deseja
    realizar uma nova operação. O programa deve encerrar quando o usuário digitar a opção 0(ZERO), portanto, caso o mesmo digite uma opção inválida, o programa não deve encerrar.
    Dado o menu de opções, exiba:
    1. O maior valor - DONE
    2. A média dos valores - DONE
    3. As posições em que existam valores ímpares - DONE
    4. Os valores dispostos em ordem inversa - DONE
    5. Buscar número: informe um número e o procure no vetor preenchido, retornando a posição e
    o valor desse número. (retorne -1 caso não encontre) - UNDONE
    6. Multiplique os valores pelo inverso de seu índice. (Ex.: se o índice é 2, então o valor deve
    ser multiplicado por -2) - DONE */

    int vetor[5], resposta, maior_numero = -98, soma = 0, posicao, numero, achou = 0;
    float media;

    for (int i=0; i<5; i++)
    {
        printf("Digite um valor inteiro (sem casas decimais):\n");
        scanf("%i",&vetor[i]);
        system("cls");

        soma = soma + vetor[i];

        if (vetor[i]>maior_numero)
        {
            maior_numero = vetor[i];
        }
        if (vetor[i]%2 == 0)
        {

        }
    }

    do
    {
        printf("\nESCOLHA UMA OPERAÇÃO:\n");
        printf("\n0 - PARA ENCERRAR\n1 - PARA EXIBIR O MAIOR VALOR DIGITADO\n2 - PARA EXIBIR A MÉDIA DOS VALORES DIGITADOS\n3 - PARA EXIBIR AS POSIÇÕES EM QUE EXISTEM VALORES ÍMPARES\n");
        printf("4 - PARA EXIBIR OS VALORES DISPOSTOS EM ORDEM INVERSA\n5 - PARA BUSCAR UM NÚMERO NO VETOR\n6 - PARA MULTIPLICAR OS VALORES PELO INVESRSO DE SEU ÍNDICE\n\n");
        scanf("%i",&resposta);
        system("cls");

        switch(resposta)
        {
        case 1:
            printf("O MAIOR VALOR DIGITADO FOI %i\n",maior_numero);
            break;

        case 2:
            media = soma / 5;
            printf("A MEDIA DOS VALORES DIGITADOS É IGUAL A %.2f",media);
            break;

        case 3:
            for (int i =0; i<5; i++)
            {
                if (vetor[i] % 2 != 0)
                {
                    printf("A %iº POSIÇÃO CONTÉM UM NÚMERO ÍMPAR, SENDO ELE O %i\n",i+1,vetor[i]);
                }
            }
            break;

        case 4:
            for (int j = 4; j>=0; j--)
            {
                printf("%i\t",vetor[j]);
            }
            break;

        case 5:
            printf("DIGITE UM NÚMERO PARA VER SE O MESMO FOI DIGITADO ANTERIORMENTE:\n");
            scanf("%i",&numero);
            for (int i = 0; i<5; i++)
            {
                if (numero == vetor[i])
                {
                    printf("O NUMERO %i FOI DIGITADO ANTERIORMENTE NA %iº POSIÇÃO.",numero,i+1);
                    achou = 1;
                }

            }
            if (achou == 0)
            {
                printf("-1");
            }
            break;

        case 6:
            for (int i = 0; i<5; i++)
            {
                printf("%i\t",vetor[i]*(-i));
            }

            break;
        }


    }
    while(resposta!=0);
    printf(".F I M  D O  P R O G R A M A.");








}
