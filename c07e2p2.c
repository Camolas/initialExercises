#include "stdio.h"
#include "ctype.h"
char *init_str(char *s)
{

	printf ("Frase Original: \" %s \"\n",s);
	s[0] = '\0';
	printf( " A frase final:\ " %s \"\n",s);
	return s;
}

int main()
{
	char str[]="Ontem fui comprar um electrodoméstico"; // com char *s="Ontem fui comprar um electrodoméstico"; give error same...
	init_str(str);
	return 0;
}
