#include <stdio.h>
main ()
{
  int indice,d=1,media;
  while(d=<30)
	{
	printf ("Indice da qualidade do ar:");
	scanf ("%d", &indice);
	if (indice < 35)
		printf ("Boa\n");
	else if (indice >= 35 && indice <= 60)
		printf ("Má\n");
	else
		printf ("Péssima\n");
	media=(media + indice)/d;
	printf("A Media momentanea é:\v", media);
	d++;
	printf("A media da qualidade do ar é:%d \v*\tboa\v**\trazoável\v***boa",media);
	}
	if (media < 35)
		printf ("Boa\n");
	else if (media >= 35 && media <= 60)
		printf ("Má\n");
	else
		printf ("Péssima\n"); 
}

