#include <stdio.h>
int
main ()
{
  int indice;
  printf ("Indice da qualidade do ar:");
  scanf ("%d", &indice);
  if (indice < 35)
    printf ("Boa\n");
  else if (indice >= 35 && indice <= 60)
    printf ("Má\n");
  else
    printf ("Péssima\n");
  return 0;
}
