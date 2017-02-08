#include <stdio.h>
#define NUM 5
int main (void)
	{
	int fatorial;
	int resposta = 2;
	fatorial=NUM;
	for ( ;fatorial>=3;fatorial--)
	  {
		resposta *=fatorial;
	  }
	printf("%d=NUM%d! ",fatorial,NUM);
}
	
