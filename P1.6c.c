#include <stdio.h>
int main (void)
{
  int a, b, r, mmc, c, d;
  printf("Introduz a e b:\n");
  scanf("%d %d", &a, &b);
  c = a;
  d = b;
  while (a != 0)
    {
      r = b % a;
      b = a;
      a = r;
    }
  mmc = (c * d)/b;
  printf("mmc(%d,%d) = %d\n",c,d,mmc);
  return 0;
}
