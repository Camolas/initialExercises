#include<stdio.h>
int
main (void)
{
  int x, y, m;
  printf ("Introduza 2 valores:");
  scanf ("%d %d", &x, &y);
  if (y < x)
    m = x;
  else
    m = y;
  printf ("%d \n", m);
  return 0;
}
