#include <stdio.h>
int
main (void)
{
  int x, i, p;
  x = 2;
  while (x != 0)
    {
		puts("escreve o valor de x");
      scanf ("%d",&x);
      if (x < 0)
	break;
      p = 1;
      i = 1;
      while (i <= x)
	{
	  p *= i;
	  i++;
	}
    }
  printf ("Factorial(%d)=%5d\n", x, p);
  return;
}
