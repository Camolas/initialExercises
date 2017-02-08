#include <stdio.h>
main ()
{
  int n1, n2;
  printf ("Introduz o primeiro inteiro\n");
  scanf ("%d", &n1);
  printf ("Introduz o segundo inteiro\n");
  scanf ("%d", &n2);
  if (n1 == n2)
    printf ("%d igual a %d\n", n1, n2);
  else if (n1 < n2)
    printf ("%d maior do que a %d\n", n2, n1);
  else
    printf ("%d maior do que a %d\n", n1, n2);
}
