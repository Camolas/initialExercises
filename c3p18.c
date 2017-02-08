/* ------000000 DamasBook's ------111111111
                      
                verifica se um ano é bissexto
 *
 
 *
                  cap 3*exercício 18*          */
#include <stdio.h>
int main (void)
	{
		long int dias;
		switch (dias)
			{
				case '366': puts('é bissexto');// ou uma string (extenso-trezentos e...)
				case '365': puts('ano comum');
				default: puts('parametros não validados');
			}
		return 0;
	}
