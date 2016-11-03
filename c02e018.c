#include <stdio.h>
main() {
	int tempo;/*ou do tipo float*/ 
	printf("Introduz o numero  de segundos em questão\n");
	scanf("%d",&tempo);
	printf("o tempo decorrido em horas: %d\v", (tempo/60)/60);
	printf("o tempo decorrido em minutos %d \n",tempo/60);
	printf("conversão a segundos dá: %d \b\v",tempo);
}
