#include <stdio.h>
int main()
	{
		int n_horas;
		long res;
		char tipo;
		printf("Nº de Horas: "); scanf("%d",&n_horas);
		printf("O que Mostrar (m/s/d): "); scanf(" %c",&tipo);
		switch (tipo)
		{
			
			case 'm':
			case 'M': res =  n_horas * (long) 60;
				break; 
				
			case 's' :
			case 'S' : res = (long) n_horas * 3600;
				break;
			
			case 'd' :
			case 'D' : res = n_horas * 36000L;
				break;
		}
		printf(" %d horas --> %ld %c\n",n_horas,res,tipo);
	return 0;
	}
