#include <stdio.h>
int main(void)
  {	
	  int dias_ano;  // o digitando o número do ano se este for multiplo de 4 está automaticamente sabido
	  scanf("%d",&dias_ano);
	  if (dias_ano==366)
		puts("Ano bissexto");
	  else 
		puts("não ano bissexto");
	  return 0;
  }
	
		/*If ((year modulo 4 is 0) and (year modulo 100 is not 0)) or (year modulo 400 is 0) Then
  leapYear = true
 Else
  leapYear = false
 End if

*/
	  
