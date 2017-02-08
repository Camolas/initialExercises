#include <stdio.h>
int main (void)
  {
	float valor;
	puts("Digite o preço do artigo\n");
	scanf(" %f",&valor);
	printf("a calcular ...\n\nvalor em saldo é "); 
	if (valor>50)
		valor=0.60*valor;
	else
		if (valor > 25)
			valor = 0.80*valor;
		else	if (valor > 10)
					valor *=0,90;
				else 	valor*=0.95;
	printf("%f\n\v",valor);
	return 0;
  }
	
	
