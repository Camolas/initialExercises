#include <stdio.h>
int main(void)
	{
		int n,m;
		printf("escreve o valor do primeiro e segundo valores, respectivamente\n");
		scanf("%d%d",&n,&m);
		if (m==0)
			puts("Divisão por 0 não terá êxito");
		else 
		{
		if (n%m==0)
			printf("%d divide %d, ou %d é divisível por %d",m,n,n,m);
		else
			printf("A propriedade não se verifica");
		}
		return 0;
	}
