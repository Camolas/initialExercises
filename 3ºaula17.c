#include <stdio.h>
int main(void)
	{
	int n;
	printf("escreve a um número a inverter:\t");
	scanf("%d",&n);
	puts("\vO número invertido será:");
	/*if (n<10 && n>0) 
		printf("%d",n);*/ 
	while(n>0)//ao invês de 10
		{
			printf("%d",n%10);//paratirar uma cifra divido por dez
			n/=10;//ele faz cifra=n%10 e imprime
		}
	
	while(n<0)//for (n<0;n=0;n/10)
	{
		//se quiser por dentro do while ->if (n<0)
		n*=-1;printf("-");
		
		while(n>0)//ao invês de 10
		{
			printf("%d",n%10);//paratirar uma cifra divido por dez
			n/=10;//ele faz cifra=n%10 e imprime
		}
	}
	puts ("");
	return 0;
	}
			
