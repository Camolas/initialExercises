#include <stdio.h>
main ()
{
  int indice,d=1,media,boa=0,ma,pessima;
  while(d<=30)
	{
	printf ("Indice da qualidade do ar:");
	scanf ("%d", &indice);
	if (indice < 35)
		{
			printf ("Boa\n");boa++;
		}
	else if (indice >= 35 && indice <= 60)
		{
			printf ("Má\n");++ma;
		}
	else
		{
			printf ("Péssima\n");
			++pessima;
		}
	media=(media*(d-1)+indice)/d;
	/*media=(media + indice)/d;*/
	printf("A Media momentânea é:%d\v", media);
	d++;
	}
	printf("A media da qualidade do ar é:%d \v*\tPéssima\v**\tRazoávelmente má\v***Boa\n \n RESULTADO FINAL: %d b,%d m,%d p ",media,boa,ma,pessima);
	if (media < 35)
		printf ("Boa\n");
	else if (media >= 35 && media <= 60)
		printf ("Má\n");
	else
		printf ("Péssima\n"); 
}

