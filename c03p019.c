#include <stdio.h>
main ()
{
	int horas;
	long int converte_a;
	char letra1;
	puts("escreve o numero de horas e em seguida, a unidade pretendida pra converter");
	scanf("%dh",&horas); puts(" qual a unidade : {M, S, D}"); printf("escreve o tipo ou letra1 (deixando a ler)"); scanf(" %c",&letra1);
	switch(letra1)
	{
		case 'd':
		case 'D': converte_a *=10;
		case 's':
		case 'S':converte_a *= 60;
		
		case 'M':converte_a=60 *converte_a;
		case'm':/*converte_a=converte_a*/break;
		default:printf("cadê\n");
		
	}
	printf("Muito bem, perante os seus dados a conversão\v que é\v obtida:\t %ld da respectiva\n",converte_a); 
}
