#include <stdio.h>
int main(void)
  {	
	  int x;
	  puts("escreve o valor à dar a variável");
	  scanf("%d",&x);
	  while(x==0)
	    {
		printf("Vale zero\n");
		x++;
		}
	  while(x!=0 && x!=1) // diferente de zero e diferente de um numa só expressão
	  {
		printf("\nNão é zero\n");
		x=0;
		}
		return 0;
	}
