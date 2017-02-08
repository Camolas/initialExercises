#include <stdio.h>
/* uma vez que o ano pode ser tomado em qualquer valor 
 * vamos considerar universal, os outro em que têm de ser controlados.
 * uma vez que vão  se comparados com os val. max*/
int main(void)
	{
	int ano,dias=0;
	int ddias,mes;
	printf("qual o ano em causa\n"); scanf("%d",&ano);
	puts("Escreve o dia e o mês do 1ºbeijo");scanf("%d%d",&ddias,&mes);
	if (ano%4==0 /*&& (ano%100!=0|| ano%400==0)*/ && (0<mes && mes<13))
	{
		switch (mes)// definir o max number of cardinal directly
		{
			case 7:
			case 8:
			case 10:
			case 12:
			case 5:
			case 3:
			case 1:dias=1;
			case 4:
			case 6:
			case 9:
			case 11:dias+=1;
			case 2:dias+=29;//ou -2 a que se soma -1 para os 31 final
			if (ddias<=dias)
			{
				printf("A data é verdadeira. E corresponde a %dºdia do %dºmês de %d",ddias,mes,ano);
				break;
			}// senão corresponder com bool==1, respetivo à condição então o programa baza do {}. E para no error
			default: puts("error");
		}
	}
	else 
		{	
		printf("As this isn't a leap year\n then:\v"); 
		switch (mes)// defenir o max number of cardinal directly
			{
			case 7:
			case 8:
			case 10:
			case 12:
			case 5:
			case 3:
			case 1:dias=1;
			case 4:
			case 6:
			case 9:
			case 11:dias+=2;
			case 2:dias+=28;//ou -2 a que se soma -1 para os 31 final
			if (ddias<dias)
				{
				printf("A data é verdadeira. E corresponde a %dºdia do %dºmês de %d",ddias,mes,ano);
				break;
				}// senão corresponder com bool==1, respetivo à condição então o programa baza do {}. E para no error
			default: puts("error");
			}
		}
	return 0;
	   }
