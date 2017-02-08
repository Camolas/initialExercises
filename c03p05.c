#include <stdio.h>
main ()
{
  int x, n;
  puts ("escreve os valores respectivos");
  scanf ("%d%d", &x, &n);	/*experimentar sem , */
  if (x >= n)
    printf ("Ordem é:%d<%d\v", n, x);
  else
    printf ("Ordem é- %d<%d\n", x, n);	/*diferenças entre crescente e estritamente crescente */
}
