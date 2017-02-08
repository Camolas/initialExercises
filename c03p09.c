#include <stdio.h>
main ()
{
  float salario, estado_civil, taxa;
  printf ("Introduza o seu salário\n");
  scanf ("%f", &salario);
  printf ("escreva 0 para solteiro e float  para casado\n");
  scanf ("%f", &estado_civil);
  if (estado_civil == 0)
    taxa = 0.1;
  else
    taxa = 0.09;
  printf ("o imposto a pagar: %.2f\v", salario * taxa);
}
