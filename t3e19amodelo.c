#include <stdio.h>
int main (void)
{
  int meses_ano,dias;
  puts ("diz o mes em causa pelo seu ordinal\n entre 1 a 12\v:\n");
  scanf ("%d", &meses_ano);
  if (meses_ano ==2)
	dias=28;
  else
	if (meses_ano== 4 || meses_ano ==6|| meses_ano ==9 || meses_ano==11)
		dias = 30;
	else dias=31;
  printf("O mes %d tem %d dias\n",meses_ano,dias);
  return 0;
}
