#include <stdio.h>

int main (void)
{
  float p, d;
  
  printf("Insira o valor do preço do artigo: ");
  scanf("%f", &p);
  
  if (p > 50.0)
    d = 0.4;
  else if (p > 25 && p <= 50)
    d = 0.2;
  else if (p > 10 && p <= 25)
    d = 0.1;
  else
    d = 0.05;

  p *= (1.0 - d);
  
  printf("O preço de desconto é: %2.2f\n", p);
  return 0;
}

