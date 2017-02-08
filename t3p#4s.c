#include <stdio.h>
#define DIAS 30
int
main ()
{
  int indice, dias = 1, boa = 0, ma = 0, pessima = 0, soma = 0;
  double media;
  printf ("Indices da qualidade do ar:\n");
  while (dias <= DIAS)
    {
      scanf ("%d", &indice);
      if (indice < 35)
	boa = boa + 1;
      else if (indice >= 35 && indice <= 60)
	ma = ma + 1;
      else
	pessima = pessima + 1;
      soma = soma + indice;
      dias = dias + 1;
    }
  media = (float) soma / DIAS;
/*....FALTAM OS PRINTFS!!!
}
ber 13
...os PRINTFS..*/
  printf ("\nQualidade || Número de dias\n");
  printf ("---------------------------\n\n");
  printf ("Boa %4d\n", boa);
  printf ("Ma %4d\n", ma);
  printf (" Pessima %4d\n\n", pessima);
  printf ("Em média a qualidade foi ");
  if (media < 35)
    printf ("Boa\n");
  else if (media >= 35 && media <= 60)
    printf ("Má\n");
  else
    printf ("Péssima\n");
  return 0;
}
