#include <stdio.h>
main()
{	float salario, taxa;
	char genero;
	puts("escreva a primeira letra do seu género\n");
	/*scanf("%c"&genero);*/genero=getchar();
	puts("introduza o montante de seu ordenado");
	scanf("%f",&salario);
	
	if (genero == 'm' || genero == 'M') taxa=0.10;
	else 
		if (genero  == 'h' || genero == 'H') taxa =0.10 + 0.05;
		else {printf("genero errado\v"); taxa=0.20;}
	printf("o imposto pago pelo usuário é de:%f  \n", salario*taxa);
}
