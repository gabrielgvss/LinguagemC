#include <stdio.h>
#include <locale.h>

int main(){

int num1,num2;

setlocale(LC_ALL,"Portuguese");

printf("Digite um n�mero:\n");
scanf("%i",&num1);
printf("Digite outro n�mero:\n");
scanf("%i",&num2);

if (num1>num2){
    printf("A ordem crescente entre os n�meros digitados � de: %i, %i",num2,num1);
}
else if (num1 == num2) {
    printf("N�o h� uma ordem predefinida uma vez que os dois n�meros digitados possuem o mesmo valor!");
}
else{
    printf("A ordem crescente entre os n�meros digitados � de: %i, %i",num1,num2);
}


}
