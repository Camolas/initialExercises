#include <stdio.h>
int main(void) 
{
	int a, b, r,ab;
	printf("Introduz a e b:\n ");
	scanf("%d %d",&a,&b);
	printf(" o m.d.c(%d,%d)= ",a,b);
	ab=a*b;
	while( a != 0 ) 
	{
		r= b % a; b = a; a = r;
	}
	printf("%d\n",a); 
	printf("%d\n",b);
	if (b==1) puts("a e b são primos entre si");
	printf("O mmc(a,b)=%d\n",ab/b);
	return 0;
	
//sabendo nos da definição de mmc: mmc(a,b) = (ab)/mdc(a,b) 1-temos de calcular o produto antes de efetuar os cálculos para o mdc 
}
