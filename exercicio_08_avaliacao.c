#include <stdio.h>
#include <locale.h>
#include <windows.h>

main(void)
{
    setlocale(LC_ALL,"Portuguese");
    /* Fa�a um programa que leia um vetor com 5 inteiros. Exiba um menu de op��es, execute a a��o escolhida e exiba o resultado. O programa deve ser capaz de solicitar ao usu�rio se deseja
    realizar uma nova opera��o. O programa deve encerrar quando o usu�rio digitar a op��o 0(ZERO), portanto, caso o mesmo digite uma op��o inv�lida, o programa n�o deve encerrar.
    Dado o menu de op��es, exiba:
    1. O maior valor - DONE
    2. A m�dia dos valores - DONE
    3. As posi��es em que existam valores �mpares - DONE
    4. Os valores dispostos em ordem inversa - DONE
    5. Buscar n�mero: informe um n�mero e o procure no vetor preenchido, retornando a posi��o e
    o valor desse n�mero. (retorne -1 caso n�o encontre) - UNDONE
    6. Multiplique os valores pelo inverso de seu �ndice. (Ex.: se o �ndice � 2, ent�o o valor deve
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
        printf("\nESCOLHA UMA OPERA��O:\n");
        printf("\n0 - PARA ENCERRAR\n1 - PARA EXIBIR O MAIOR VALOR DIGITADO\n2 - PARA EXIBIR A M�DIA DOS VALORES DIGITADOS\n3 - PARA EXIBIR AS POSI��ES EM QUE EXISTEM VALORES �MPARES\n");
        printf("4 - PARA EXIBIR OS VALORES DISPOSTOS EM ORDEM INVERSA\n5 - PARA BUSCAR UM N�MERO NO VETOR\n6 - PARA MULTIPLICAR OS VALORES PELO INVESRSO DE SEU �NDICE\n\n");
        scanf("%i",&resposta);
        system("cls");

        switch(resposta)
        {
        case 1:
            printf("O MAIOR VALOR DIGITADO FOI %i\n",maior_numero);
            break;

        case 2:
            media = soma / 5;
            printf("A MEDIA DOS VALORES DIGITADOS � IGUAL A %.2f",media);
            break;

        case 3:
            for (int i =0; i<5; i++)
            {
                if (vetor[i] % 2 != 0)
                {
                    printf("A %i� POSI��O CONT�M UM N�MERO �MPAR, SENDO ELE O %i\n",i+1,vetor[i]);
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
            printf("DIGITE UM N�MERO PARA VER SE O MESMO FOI DIGITADO ANTERIORMENTE:\n");
            scanf("%i",&numero);
            for (int i = 0; i<5; i++)
            {
                if (numero == vetor[i])
                {
                    printf("O NUMERO %i FOI DIGITADO ANTERIORMENTE NA %i� POSI��O.",numero,i+1);
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
