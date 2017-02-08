#include <stdio.h>
int main (void) 
{
	int i,n,soma;
	printf("Digite o nº até ao qual vai ser realizada a soma destes.\n");
	scanf("%d",&n);
	for(i=0,soma=0;i<n;i++)
	{
	soma += soma;
	printf("%d",soma);
	}
	printf ("A soma será:%d\n",soma);
	return 0;
}
