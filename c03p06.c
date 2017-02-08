#include <stdio.h>
main ()
{
  float salario,imposto;
  puts ("escreve o seu salario"); scanf("%f",&salario);
  if (salario>0 && salario <1000)
  {
	  /*salario = salario*0.95;*/
		printf("Imposto=%.2f\n",0.05*salario);
  }
  else
	if (salario>1000)
		printf("Imposto = %.0f\v",0.10*salario);
	else 
		puts("Erro de valor");
}
