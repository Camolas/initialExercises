#include <stdio.h>
int main (void)
{
float n,base,soma=1;//escusa de fazer o elevado a zero (já incluído)
puts("\nescreve o valor da base para a soma das potências"); 
scanf("%f%f",&base,&n);
while (n>0)
{
	soma+=pow(base,n);//soma 1a potência de cada vez. e 
	n--;
}
printf("A soma das potências resulta em %f\n",&soma); 
return 0;
}
