#include <stdio.h>
int main ()
{
	int n, cont, i;
	for (n=10,cont=0;n>0;n--)
		{
			scanf("%d",&i);
			if (i%4==0 && i!=0)
				cont++;
		}
	printf("Existem %d múltiplos de 4\n",cont);
	return 0;
}
