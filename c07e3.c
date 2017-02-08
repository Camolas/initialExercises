#include <stdio.h>
#include <string.h>

int strchlastposition(char * s, char ch)
{
	int lp = -1;
	for (unsigned int i = 0; i <= strlen(s); i++)
	{
		if (i==tolower(ch) || i==toupper(ch))
			lp = i;
	}
return lp;
}
int main()
{		
  char *frase = "Ontem fui comprar um electrodoméstico";
  printf("O último caracter da frase: \"%s\" foi encontrado na %d posição da frase\n", frase, strchlastposition(frase,'o'));
} 
