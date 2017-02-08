#include "stdio.h"
#include "ctype.h" // vamos utilizar estas Funções que já demos !!
int strcount(char s[])
{
//char ch; // dado ser fornecida uma string eu vou mas é verificar se o index  da string corresponde ou não ..
int contador;
	
	for (int i = contador = 0; s[i] != '\0'; i++)
	{
		if ( isalpha(s[i]))
			contador++;//ch = getchar(); dá forma que estava a pensar se não fosse passada por parâmetro
	}
	printf( " A frase:\"%s\" tem %d carateres alfabéticos\n",s,contador);
	return contador;
}

int main()
{
	strcount("Ontem fui comprar um electrodoméstico");
	return 0;
}
	
