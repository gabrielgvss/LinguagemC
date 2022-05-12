
#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");

int num1, num2, num3;

do{
printf("Digite um número inteiro:\n");
scanf("%d",&num1);
printf("Digite outro número inteiro:\n");
scanf("%d",&num2);
printf("Digite mais um número inteiro:\n");
scanf("%d",&num3);

if ((num1>num2) && (num1>num3)){
        printf("O PRIMEIRO NÚMERO '%d' É O MAIOR!",num1);
}
else if ((num2>num1) && (num2>num3)){
        printf("O SEGUNDO NÚMERO '%d' É O MAIOR!",num2);
}
else if ((num1==num2) && (num2 == num3)){
        printf("OS TRÊS NÚMEROS SÃO IGUAIS!");
}
else {
       printf("O TERCEIRO NÚMERO '%d' É O MAIOR!",num3);
}
}while(num1 == 11111);

return 0;
}
