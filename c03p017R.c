#include <stdio.h>
main()
{
int n_horas;
long int n_segundos;/*
printf("numero de horas\n"); scanf ("%f",&n_horas);
printf("numero de segundos:%.2f\n",n_horas*3600);*/


printf("indique o numero 	de horas\n"); scanf ("%d",&n_horas);
n_segundos=n_horas<0? 0: n_horas*60*60L;
printf("%d horas têm %ldsegundos\n",n_horas,n_segundos);
}
	
	
