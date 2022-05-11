#include <stdio.h>
main ( )
{

char a ;
printf ("Digite um caracter:\n");
scanf ("%c", &a );

printf (" \n %c = %d em decimal ", a, a);

printf ("%o em octal, %x em hexadecimal ", a, a);

}