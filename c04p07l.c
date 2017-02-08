#include <stdio.h>
 main ()
{
	int num,n,soma;
	long int produto; // são os elementos neutros
	printf("escreve o valor para n\n");scanf("%d",&num);
	printf("A soma dos %d 1ºselementos",num);
	for (soma=0,produto=n=1;num>=n;n++)
		{
			soma += n;
			produto *= n;
		}
	printf("será %d enquanto o produto é %ld",soma,produto);
return 0;
}
