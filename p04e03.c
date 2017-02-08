#include <stdio.h>
#define TAB 5
int main(void)
{
	int CONST=5,n=1;//eficiência do programa armazenar - memória: gestão de recursos
	char op;
	op='*';
	const int cinco=5;
	while(n<=10)//nunca é alterada a co
	{
		printf("%d\t%c %2d =  \b%3d\t",CONST,op,n,CONST*n);
		printf("%d \t\b\b%c\t%2d = %2d\t",n,op,cinco,cinco*n);
		printf("%2d =%2d \t\b\b%c\t %d\t",TAB*n,TAB,op,n);
		puts("\n");
		n=n+1;
		
	/*bool variavelBool= 0;
	printf ("i\n",variavelBool);
	* não funciona*/
	}
	return 0;
}

