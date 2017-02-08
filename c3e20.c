#include <stdio.h>
int main()
	{
		int n_horas;
		long res;
		char tipo;
		printf("Nº de Horas: "); scanf("%d",&n_horas);
		printf("O que Mostrar (m/s/d): "); scanf(" %c",&tipo);
		res = n_horas;
		switch (tipo)
		{
			case 'd' :
			case 'D' : res *= 10L;// atualizo a variável porque vou alterar sempres a mesma consecutivamente .. à medida dos cases
		printf(" %ld *.*",res);	
			case 's' :
			case 'S' : res = (long) res * 60;
		printf("%ld :.:",res);		
			case 'm':
			case 'M': res =  res * (long) 60; 
		printf(" %ld ..!",res);		
		}
		printf(" %d horas --> %ld %c\n",n_horas,res,tipo);
	return 0;
	}
