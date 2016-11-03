#include <stdio.h>

int main (void)
{
  int a, b, c;
  int soma, menor, medio, maior;

  printf("Insira 3 números: ");
  scanf("%d %d %d", &a, &b, &c);

  //a
  if ( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a )
    printf("Os números podem ser lados de um triângulo retângulo\n");
  else
    printf("Os números não são lados de um triângulo retângulo\n");

  //b
  soma = a + b + c;
  printf("A soma é %d\n", soma);

  //c
  printf("O quadrado da soma é %d\n", soma*soma);

  //d
  printf("A soma dos quadrados é %d\n", a*a+b*b+c*c);

  if (a >= b && a >= c)
    {
      maior = a;
      if ( b >= c)
	{
	  medio = b;
	  menor = c;
	}
      else 
	{
	  menor = c;
	  medio = b;
	}
    }
  else if (b >= a && b >= c)
    {
      maior = b;
      if ( a >= c)
	{
	  medio = a;
	  menor = c;
	}
      else 
	{
	  menor = c;
	  medio = a;
	}
    }
  else
    {
      maior = c;
      if ( a >= b)
	{
	  medio = a;
	  menor = b;
	}
      else 
	{
	  menor = b;
	  medio = a;
	}
    }
  
  //d
  printf("O menor é %d\n", menor);
  
  //f
  printf("O do meio é %d\n", medio);
  
  //g
  printf("%d %d %d\n", menor, medio, maior);

  return 0;
}
