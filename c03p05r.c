#include <stdio.h>
main()
{
int a,b,temp;
puts("escreve os valores respectivos"); scanf("%d%d",&a,&b);/*experimentar sem ,*/
if (a>b)
{
	temp=a;
	a=b;
	b=temp;
}
printf("Ordem é- %d<%d\n",a,b); /*diferenças entre crescente e estritamente crescente*/
}

