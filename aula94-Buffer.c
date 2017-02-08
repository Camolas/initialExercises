// Limpeza de Buffer
#include <stdio.h>
int main ()
	{
		// funções que facilitam input ou output ...
		// função getchar ... lê carater do stdin (vem do teclado)
		// buffer local na memória que armazena dados até ser carregado o enter
		// aperta-mos duas teclas 
	char a,b,c;
	
	a = getchar();
	b = getchar();
	c = getchar();
	
	printf("%c", a);
	printf("%c", b);
	printf("%c", c);
	
	return 0;
	}
