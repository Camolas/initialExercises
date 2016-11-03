#include <stdio.h>
int main (void) 
{//digitar notas,armazenar notas num vetor,calcular média e devolução do seu resultado.
	int i=0;
	float notas[5];
	float total = 0;
	float media = 0;
	
	printf("Insira 5 notas\n");
	for (i=0;i<5;i++)
	{
	scanf("%f",&notas[i]);
	total+=notas[i];
	//if (i==5)
	
	media = total/i;
	}
	printf("A media é de:%F e o total será:%3f\n" ,media,total);
	return 0;
}	
