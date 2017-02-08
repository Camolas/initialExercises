#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265;
 
int main (void){
float raio;
double area, comprimento;
printf ("Digite o raio do seu circulo:\n         cm\r");
scanf ("%f", &raio);
area = (raio*raio)*PI;
comprimento = raio*2*PI;
system ("cls");
printf ("A area do seu circulo e: %.2f cm\n", area);
printf ("O comprimento do seu circulo e: %.2f cm", comprimento);
printf ("\n\n");
system ("pause");
return 0;
}
