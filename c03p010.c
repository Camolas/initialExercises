#include <stdio.h>
main ()
{
float salario;
puts("escreva o seu salario"); scanf("%f",&salario);
salario=salario>1000? salario*1.05:salario*1.07;
printf("O pagamento foi actualizado para: %f\n",salario);
}
