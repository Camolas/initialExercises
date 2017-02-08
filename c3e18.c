#include <stdio.h>
int main()
	{
		int n_horas;
		char escolha;
		long n_seg;
		long int n_min,n_dseg;/*pode ser muit0 grande*/
		printf("Nº de Horas: "); fflush(); scanf("%d",&n_horas);
		// o scanf pode ser que esteja a ler a mudança de linha sim...puts("Digite a unidade de conversão"); scanf("%c",&escolha);
		printf("Digite a unidade de conversão"); getchar(); scanf("%c",&escolha);
		if (escolha == 's')
		{
			n_seg = n_horas < 0? 0: n_horas * (long) 3600; 
			printf("O número de segundos gasto é: %ld",n_seg);
		}
		else
			if (escolha == 'm' || escolha == 'M') 
		{
		       n_min = n_horas < 0? 0: n_horas * (long) 60L; 
			printf("O número de minutos gasto é: %ld",n_min);
		}
			else
				if (escolha == 'd' || escolha == 'D') 
		{
			n_dseg = n_horas<0? 0: n_horas * (long) 3600*10; 
			printf("O número de minutos gasto é: %ld",n_dseg);
		}
	return 0;
	}
