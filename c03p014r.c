#include <stdio.h>
main ()
{
  float salario, taxa = 0.10;
  char genero;


  puts ("introduza o montante de seu ordenado");
  scanf ("%f", &salario);

  puts ("escreva a primeira letra do seu género\n");
  scanf ("%c", &genero);


  switch (genero)
    {
    case 'm':
    case 'M':
      taxa = taxa + 0.05;
    case 'f':
    case 'F':
      taxa = taxa + 0.10;
    }
  printf ("o imposto pago pelo usuário é de:%.2f  \n", salario * taxa);
}
