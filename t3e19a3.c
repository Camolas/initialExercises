#include <stdio.h>
int main (void)
{
  int meses_ano,dias=0;
  puts ("diz o mes em causa pelo seu ordinal");
  scanf ("%d", &meses_ano);
	switch (meses_ano)
		{
	case 7:
	case 8:
	case 10:
	case 12:
	case 5:
	case 3:
	case 1:dias=1;
	case 4:
	case 6:
	case 9:
	case 11:dias+=2;
	case 2:dias+=28;
		printf("o  mes %d têm %ddias \n",meses_ano,dias);
		}
	return 0;
	   }
