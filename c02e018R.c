#include <stdio.h>
main(){
long int n_segundos;
printf("informação de escrever o numero\b ;\n")
scanf("%ld",&n_segundos);
printf("o numeros de horas:%ld\voi\n",n_segundos/(60*60));
printf("na parte do minutos é %ld\r\v\r",(n_segundos%3600)/60);/*1hora=60min*/
printf("os sobrantes segundos:%ld\n",n_segundos%60);

printf("O tempo com todos os parametros é:%ldhoras %ldminutos e %ldsegundos",n_segundos/(60*60),(n_segundos%3600)/60,(n_segundos%60)%60);
}
