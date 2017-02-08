#include <stdio.h>
//#define TAB 5
int main(void)
{
	int CONST,n=1;//eficiência do programa armazenar - memória: gestão de recursos
	char op;
	op='*';
	int cinco=5;
	printf("define a tabuada desejada\n");
	scanf("%d",&CONST);
	do 
	{
	
		while(n<=10)//nunca é alterada a co
		{
		printf("%d\t%c %2d =  \b%3d\t",CONST,op,n,CONST*n);
		printf("%d \t\b\b%c\t%2d = %2d\t",n,op,cinco,cinco*n);\puts("\n");
		n=n+1;
		}
		//passa a tabuada anterior
		cinco-=1;
		n=1;
		//putchar('tabuada realizada');
	}
	while(cinco > 0);
		
	/*bool variavelBool= 0;
	printf ("i\n",variavelBool);
	* não funciona*/
	return 0;
}
