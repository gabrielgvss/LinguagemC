#include <stdio.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL,"Portuguese");
  int matriz[3][3];
  int soma_dp, soma_ds; 
  int determinante;
  
  //inserção de valores;
  for (int i = 0; i<3; i++){
    for (int j = 0; j<3; j++){
      printf("Digite o número da %iº linha que está na %iª coluna: ",i+1,j+1);
      scanf("%i",&matriz[i][j]);
    }
  }
  
  //calculo de determinantes das "diagonais principais"(esquerda p/direita);
  //[(a11.a22.a33) + (a12.a23.a31) + (a13.a21.a32)]
  soma_dp = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]);
  printf("\nA soma das diagonais principais é igual a %i",soma_dp);
  
  //calculo de determinantes das "diagonais secundarias"(direita p/esquerda);
  //[(a13.a22.a31) + (a11.a23.a32) + (a12.a21.a33)]
  soma_ds = (matriz[0][2] * matriz[1][1] * matriz[2][0]) + (matriz[0][0] * matriz[1][2] * matriz[2][1]) + (matriz[0][1] * matriz[1][0] * matriz[2][2]);
  printf("\nA soma das diagonais secundárias é igual a %i",soma_ds);
  
  //determinante = soma das diagonais principais - soma das diagonais secundarias;
  determinante = soma_dp - soma_ds;
  
  //exibir resultados:
  printf("\nO DETERMINANTE DA MATRIZ 3X3 INSERIDA É IGUAL A:\n");
  printf("%i",determinante);
  
  return 0;
}

