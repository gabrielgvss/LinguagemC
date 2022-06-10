#include <stdio.h>
#include <locale.h>
#include <windows.h>

/*2) Implemente um programa que siga os requisitos a seguir:
1. O algoritmo deve contemplar o armazenamento de estoque para 5 produtos: água,
refrigerante, vinho, suco e cerveja. Utilize um vetor para armazenar a quantidade de
cada produto (Um produto em cada posição do vetor).
2. Uma venda só pode ser realizada se houver saldo positivo em estoque. Caso
contrário, não haveria como entregar o produto ao cliente na venda. Certifique-se de
não receber um valor de venda negativa.
3. Em caso de uma venda ser bem-sucedida, exibir uma mensagem positiva do
processo. Caso contrário, exibir uma mensagem informando que a venda não pode
ser efetuada.
4. A escolha do produto deve ser feita a partir de um menu de opções a ser exibido ao
usuário que escolhe a opção desejada para em seguida, informar a quantidade
desejada. Utilize a opção 0 (ZERO) para finalizar o estoque.
5. Todos os produtos iniciam com um estoque de 10 produtos, e ao longo das vendas
vão sendo reduzidos estes valores, sem a necessidade de reposição durante a
execução, imaginando que seria a única quantidade possível disponível no momento
em que o algoritmo é executado.*/

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    float quantidade, produtos[5] = {10.0, 10.0, 10.0, 10.0, 10.0}; // indices: 0 - agua 1 - refrigerante 2 - vinho 3 - suco 4 - cerveja;
    int resposta;

    do
    {
        // Exibição do menu:
        printf("============== ESTOQUE DE BEBIDAS ================\n");
        printf("[1] ÁGUA\n[2] REFRIGERANTE\n[3] VINHO\n[4] SUCO\n[5] CERVEJA\n[6] PARA CONSULTAR O ATUAL ESTOQUE\n[0] Para encerrar o programa\n\n");

        // Input para comandos:
        printf("Digite o número correspondente a mercadoria escolhida > ");
        scanf("%i", &resposta);
        if (resposta == 0)
        {
            break;
        }

        else if (resposta >= 1 && resposta < 6)
        {
            printf("\nDigite a quantidade (em Litros) desejada > ");
            scanf("%f", &quantidade);
            if (quantidade > 0)
            {

                if (quantidade < produtos[resposta - 1])
                {
                    produtos[resposta - 1] = produtos[resposta - 1] - quantidade;
                    system("cls");
                    printf("FINALIZANDO...\n");
                    printf("\nVENDA EFETUADA COM SUCESSO!\n");
                    system("pause");
                    system("cls");
                }
                if (quantidade == produtos[resposta - 1])
                {
                    system("cls");
                    produtos[resposta - 1] = produtos[resposta - 1] - quantidade;
                    printf("FINALIZANDO...\n");
                    printf("\nVENDA EFETUADA COM SUCESSO!\n\nCOM TAL VENDA, O ESTOQUE DO PRODUTO ESCOLHIDO ENCONTRA-SE ESGOTADO!\n");
                    system("pause");
                    system("cls");
                }
                else if (quantidade > produtos[resposta - 1])
                {
                    system("cls");
                    printf("A venda não é possível de ser realizada, por favor tente repetir o processo inserindo um número menor na quantidade que deseja\n\n");
                    printf("Se tal mensagem persistir após a tentativa então a quantidade do estoque do item escolhido já se esgotou\n\n");
                    system("pause");
                    system("cls");
                }
            }
            else
            {
                system("cls");
                printf("Por favor, repita o processo digitando desta vez uma QUANTIDADE VÁLIDA\n\n");
                system("pause");
                system("cls");
            }
        }
        else if (resposta == 6)
        {
            printf("============= ESTOQUE ATUAL ==============\n");
            printf("[1] ÁGUA -------------------------------%.2fL\n", produtos[0]);
            printf("[2] REFRIGERANTE -----------------------%.2fL\n", produtos[1]);
            printf("[3] VINHO ------------------------------%.2fL\n", produtos[2]);
            printf("[4] SUCO -------------------------------%.2fL\n", produtos[3]);
            printf("[5] CERVEJA ----------------------------%.2fL\n\n", produtos[4]);
        }
        else if(resposta<0||resposta>6){
            system("cls");
            printf("RESPOSTA INVÁLIDA! Por favor, escolha um item correspondente a um número exibido no menu\n\n");
        }
}
while (resposta != 0)
    ;
// Exibição final do estoque;
system("cls");
printf("============= ESTOQUE FINAL ==============\n");
printf("[1] ÁGUA -------------------------------%.2fL\n", produtos[0]);
printf("[2] REFRIGERANTE -----------------------%.2fL\n", produtos[1]);
printf("[3] VINHO ------------------------------%.2fL\n", produtos[2]);
printf("[4] SUCO -------------------------------%.2fL\n", produtos[3]);
printf("[5] CERVEJA ----------------------------%.2fL\n", produtos[4]);

return 0;
}
