#include <stdio.h>
main () {
	int horas;
	puts("Numero em jogo é:");
	long int minutos, segundos, décimos_segundos;
	char uni_tempo;	
	printf("escolha o a conversão desejada"); uni_tempo = getchar();
	switch(uni_tempo)
	{ 
		case 'M' || 'm' || "min.": minutos=horas * 60L;
		case 'S' || 's':segundos=horas *(long) 3600;
		case 'd' || 'D': décimos_segundos=(long) horas * 36000/*notação científica?*/;
	}
	printf("a horas correspondem a /*outra variável*/	
