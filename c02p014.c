#include <stdio.h>
main()
{
/*int primeiro*/
char primeirO, segundo;
printf("escreve um inteiro\n");
/*scanf ("%d", &primeirO);*/
scanf("%c",&primeirO);/*experimentar fazer aqui o casting*/
printf("O inteiro %d é o seguinte e o carater correspondente do código ASCII é :%c\n",(int)(primeirO+1),primeirO+1);/*declarar a váriavel
'seguinte' e fazer o cálculo do seu valor \"'\n cauée\\ 
* em que se posteriormente irá se colocar no printf final!!*/
/*(int)segundo=(int)primeirO+1;
printf("O inteiro %d é o seguinte e o carater correspondente do código ASCII é '%c'\n", (int) segundo,segundo);
*/}
