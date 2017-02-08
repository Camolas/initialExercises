#include <stdio.h>
main()
{
float salario;
puts("O salario é de:"); scanf("%f",&salario);
if (salario<100000)
	salario=salario + 1000;
	printf("O salario actualmente é de:%.0f\n",salario);
}
