#include <stdio.h>
void troca (int *a,int *b)
{
	int aux;
	*a=*b;
	*b=aux;
int main()
int x,y;
printf("Introduza dois valores");
scanf("%d%d",x,y);
troca(*x,*y);
printf("x=%d Y=%d",x,y);
