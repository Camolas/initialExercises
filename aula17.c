#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i=0;
  unclock_t inicio=0,fim=0;
  
  inicio=uclock();

  /*código a executar */

  int n,fatorial=1;
  printf ("fatorial de:");
  scanf ("%d", &n);
  printf ("=\v%d!=",n);
	while (n>=1)
		{
			fatorial *= n;
			printf("%d*",n);
			--n;
		}
	printf ("=%d\n",fatorial);
	
	
  fim=uclock();

  fprintf(stdout,"Tempo: %Ld",(fim-inicio)/(UCLOCKS_PER_SEC));
  return 0;
 
}
