#include <stdio.h>

void ifelse1 ()
{
  int mes;
  puts ("digite o mês, (para o qual deseja saber os dias)");
  scanf (" %d", &mes);
  if (mes < 0 || mes > 12)
    puts ("Fuck off bitch!!");
  else
    {

      if (mes == 2)
	puts ("28");
      else
	{
	  if (mes == 11 || mes == 9 || mes == 6 || mes == 4)	//não_é_um_vectr então nunca daria para por mes={4,6,9,11}
	    puts ("30");
	  else			// okay os else não devem ter condições.. teria-se de criar outro if!!(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
	    puts ("31");
	}
      puts ("\b dias");
    }
}

switch2 ()
{
  int mes, n_dias;
  puts ("Digite o mes");
  scanf ("%d", &mes);
  switch (mes)
    {
    case 2:
      n_dias = 28;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      n_dias = 30;
      break;
    default:
      n_dias = 31;
    }
  printf ("%d são o nº de dias que existem no mes %d\n", n_dias, mes);
}

void switchoutbreaks()
	{
		int mes, n_dias=0;
  puts ("Digite o mes");
  scanf ("%d", &mes);
  switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      n_dias = 1;
      
    case 4:
    case 6:
    case 9:
    case 11:
      n_dias += 2;
      
    default:
      n_dias += 28;
    }
  printf ("%d são o nº de dias que existem no mes %d\n", n_dias, mes);
	}
int
main ()
{
  //ifelse1();    
  //switch2 ();
  switchoutbreaks();
  return 0;
}
