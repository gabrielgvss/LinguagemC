#include <stdio.h>
#include <locale.h>
#include <windows.h>

/*1) Fa�a um programa que leia a temperatura de uma cidade em uma semana. O
programa dever� conter:
Menu de op��es:
Exemplo de menu:

F�rmula para converter Celsius em Fahrenheit: (�C � 9/5) + 32
O programa deve conter:
- Inserir temperaturas
- Exibir temperaturas
- Limpar registro de temperaturas
- Exibir temperaturas em Fahrenheit
- Exibir a m�dia das temperaturas da semana
- O programa dever� encerrar ao digitar a zero.*/

int main(int argc, char const *argv[])
{
    int resposta, contador = 0; //contador para registro se j� foram inseridas ou n�o as temperaturas
    float temperaturas_celsius[7], temperaturas_fahrenheit[7];  //1 semana = 7 dias;
    float soma_celsius = 0, soma_fahrenheit = 0, media_celsius, media_fahrenheit;       
    


    do
    {   
        setlocale(LC_ALL,"Portuguese");

        // Exibi��o do menu;
        printf("=================== REGISTRO DE TEMPERATURAS =====================\n\n");
        printf("|1| - Inserir temperaturas (em �C);\n|2| - Exibir temperaturas inseridas;\n");
        printf("|3| - Limpar registro de temperaturas;\n|4| - Exibir temperaturas em �F (Fahrenheit)\n");
        printf("|5| - Exibir a m�dia das temperaturas registradas;\n|0| - Para finalizar o programa;\n");

        // Input do comando a ser executado;
        printf("\nDigite sua resposta > ");
        scanf("%i",&resposta);

        // Execu��es condicionalizadas;
        if (resposta == 1) {
            system("cls");
            for (int i = 0; i<7 ; i++) {
                printf("\nInsira a temperatura (em �C) do %i� dia > ",i+1);
                scanf("%f",&temperaturas_celsius[i]);

                contador +=1;
                soma_celsius += temperaturas_celsius[i];

                temperaturas_fahrenheit[i] = (temperaturas_celsius[i] * 9/5) + 32;
                soma_fahrenheit += temperaturas_fahrenheit[i];

                printf("\n");
            }
        system("cls");

        } else if (resposta == 2){
            if (contador==0) {
                system("cls");
                printf("Por favor, antes de executar qualquer opera��o, insira as temperaturas\n");
            }
            else {
            system("cls");
            for (int i = 0; i<7 ; i++){
                printf("A temperatura (em �C) inserida no %i� dia foi igual a %.2f �C\n",i+1,temperaturas_celsius[i]);
            }
        system("pause");
        system("cls");    
            }

        } else if (resposta == 3){
            if (contador==0) {
                system("cls");
                printf("Por favor, antes de executar qualquer opera��o, insira as temperaturas\n");
            }
            else {
                system("cls");
                for (int i=0; i<7;i++){
                temperaturas_celsius[i] = 0;
                soma_celsius = 0;
                soma_fahrenheit = 0;
                contador = 0;
                }
            }
         
        system("cls");

        } else if (resposta == 4) {
            if(contador==0){
                system("cls");
                printf("Por favor, antes de executar qualquer opera��o, insira as temperaturas\n");
            }
            else{
            system("cls");
            for (int i = 0; i<7; i++) {
                printf("A temperatura de %.2f�C registrada no %i� dia � igual a %.2f �F\n",temperaturas_celsius[i],i+1,temperaturas_fahrenheit[i]);
            }
        system("pause");
        system("cls");
            }
        } else if (resposta == 5){
            if (contador == 0){
                system("cls");
                printf("Por favor, antes de executar qualquer opera��o, insira as temperaturas\n");
            }
            else{
            system("cls");
            media_celsius = soma_celsius/7;
            media_fahrenheit = soma_fahrenheit/7;
            printf("A M�dia em Celsius das temperaturas da semana inseridas foi igual a %.2f�C / %.2f�F\n",media_celsius, media_fahrenheit);
            system("pause");
            system("cls");
            }
            
        } else if (resposta<0||resposta>5){
            system("cls");
            printf("RESPOSTA INV�LIDA, POR FAVOR INSIRA UMA OP��O V�LIDA ABAIXO\n\n");
        }

    } while (resposta != 0);
    system("cls");
    printf("FIM DO PROGRAMA");
       


    return 0;
}
