#include <stdio.h>

char * memcpyB(char *dest, char *orig, int n) // dado ser um apontador de 1type copia a refÊnrência (ficam -se com a mesma referência!) 
{
	int i;
	for ( i=0; i < n; i++)
	{
		 dest[i]= orig[i] ; // estou a dizer que o local onde os valores estão armazenados..
	}
	return dest;
}
void mostra (char s[i])	// Ambas as Dimensões
{
  int j;
  for (j = 0; j < i; j++)
		printf ("%c \n", s[j]); 
} 

int main()

{
	char withoutmeaning[] = {'s','f','G','j','0'};
	int n=10;
	char livre[n];
	//mostra(memcpyB(withoutmeaning,livre, 3)[7]);
	livre = (memcpyB(withoutmeaning,livre, 3); 
	mostra(livre[n-2]);
}
