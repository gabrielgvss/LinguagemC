
#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");

int num1, num2, num3;

do{
printf("Digite um n�mero inteiro:\n");
scanf("%d",&num1);
printf("Digite outro n�mero inteiro:\n");
scanf("%d",&num2);
printf("Digite mais um n�mero inteiro:\n");
scanf("%d",&num3);

if ((num1>num2) && (num1>num3)){
        printf("O PRIMEIRO N�MERO '%d' � O MAIOR!",num1);
}
else if ((num2>num1) && (num2>num3)){
        printf("O SEGUNDO N�MERO '%d' � O MAIOR!",num2);
}
else if ((num1==num2) && (num2 == num3)){
        printf("OS TR�S N�MEROS S�O IGUAIS!");
}
else {
       printf("O TERCEIRO N�MERO '%d' � O MAIOR!",num3);
}
}while(num1 == 11111);

return 0;
}
