#include <stdio.h>
#include  <conio.h>

main ( )
{
system("color A");

char op;
float num1, num2;
printf ("digite um numero, um operador e um numero:\n");
scanf ("%f %c %f", &num1, &op, &num2);

switch (op) {
case '+':
    printf ("= %.1f", num1 + num2);
    break;

case '-' :
    printf("= %.1f", num1 - num2);
    break;

case 'x':
    printf("= %.1f",num1 * num2);
    break;

case '/':
    printf("= %.1f", num1 / num2);
    break;
default:
printf ("OPERADOR INVÁLIDO!");
}




}
