#include <stdio.h>
int main (void)
{
  int k = 1, n, s = 0, j;
  scanf("%d", &j);
  printf("Insira o numero de potencias: ");
  scanf("%d", &n);
  while (n != 0)
    {
      s += k;
      k = k * j;
      n--;
    }
  printf("a soma e %d\n",s);
  return 0;
}
