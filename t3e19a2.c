#include <stdio.h>
int main (void)
{
  int meses_ano;
  puts ("diz o mes em causa pelo seu ordinal");
  scanf ("%d", &meses_ano);
	switch (meses_ano)
		{
	case 1:puts ("Janeiro = 31 dias"); break;
	case 2:puts ("Fevereiro = 28 dias"); break;
	case 3:puts ("Março = 31 dias"); break;
	case 4:puts ("Abril = 30 dias");break;
	case 5:puts ("Maio = 31 dias");break;
    case 6:
		puts ("Junho = 30 dias");break;
	case 7:
		puts ("Julho = 31 dias");break;
	case 8:
		puts ("Agosto = 31 dias");break;
	case 9:
		puts ("Setembro = 30 dias");break;
	case 10:
		puts ("Outubro = 31 dias");break;
	case 11:
		puts ("Novembro = 30 dias");break;
	case 12:
		puts ("Dezembro = 31 dias");break;
		}
  return 0;
	   
   }
