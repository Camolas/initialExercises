#include <stdio.h>
int main (void)
	{
		int n;
		scanf("%d",&n);
		if (n==0) printf("Tem valor nulo- é zero\t oi cara :( \n");// sem este \"==0\" o resultado era oposto, ou seja ele iria ler os resultados de forma oposota considerando os valores lógicos de maneira diferente!!
			else puts("|n|>0");
	return 0;
	}
