#include <stdio.h>
int main()
	{
		int n_horas;
		long res;
		char tipo;
		printf("Nº de Horas: "); scanf("%d",&tipo);
		switch (tipo)
		{
			case 'm':
			case 'M': res =  n_horas * (long) 60;
				break; 
			case 's' 
			case 'S' : res = (long) n_horas * 3600;
				break;
			case "ds" 
			case "DS" : res = n_horas * 36000L;
				break;
		}
		printf(" %ld horas --> %ld %c",n_horas,res,tipo);
	}

