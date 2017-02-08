#include <stdio.h>

#define CLEAR_INPUT while(getchar() != '\n') /* void */

int main(void)
{  
  double salario, taxa;
  char genero;
  int ok;

  do {
    printf("introduza o montante de seu ordenado : ");
    fflush(stdout);
    ok = scanf("%lf", &salario);
    CLEAR_INPUT;
  } while (!ok);

  do {
      printf("escreva a primeira letra do seu género : ");
      fflush(stdout);
      genero = getchar();
      CLEAR_INPUT;
  } while (genero != 'm' && genero != 'M' && genero != 'f' && genero != 'F');

  switch(genero)
  {
    case 'm':
    case 'M':
      taxa=taxa+0.05;
    case 'f':
    case 'F':
      taxa= taxa+0.10;
  }

  printf("o imposto pago pelo usuário é de: %.2lf\n", salario * taxa);

  return 0;
}
