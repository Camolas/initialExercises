#include <stdio.h>
int main (void) {
	int  base=1,exp=1;
	printf("exp=1\texp ao quadrado\texp ao cubo\n");
	while(base<11)
	{
	  printf("%5d\t%15d\t%11d\n",base,base*base,base*base*base); /*fazer pela pow, alinhamento a esquerda ou direita*/
	  base++;
	}
}
