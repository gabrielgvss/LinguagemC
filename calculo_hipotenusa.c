#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    double lado1, lado2, hipotenusa;

    printf("------ CALCULADORA DE VALOR DA HIPOTENUSA --------\n");

    printf("Digite o valor do primeiro lado:\n");
    scanf("%lf",&lado1);
    printf("Digite o valor do segundo lado:\n");
    scanf("%lf",&lado2);

    hipotenusa = sqrt(pow(lado1,2) + pow(lado2,2));

    printf("Hipotenusa é igual a: %.2lf",hipotenusa);

    
}
