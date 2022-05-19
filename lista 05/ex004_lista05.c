#include <stdio.h>

int main(){

int idade, qtd_maioridade=0;

for (int i = 0; i<=10; i++){

    printf("Digite sua idade:\n");
    scanf(" %i",&idade);

    if(idade>=18){
        qtd_maioridade+=1;
    }
}
printf("A quantidade de pessoas na maioridade registrada foi igual a %i.",qtd_maioridade);


}
