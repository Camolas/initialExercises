#include <stdio.h>
int main()
{	
	float res;
	int v1,v2;//,res;
	char op;
	printf("Introduza dois valores valor\n");
	puts ("Introduz um operador de int");
	//scanf("%d%d%c",&v1,&v2,&op);
	scanf("%d %d",&v1,&v2);
	scanf("%c",&op);
	switch(op)
	{
		case '+':res=v1+v2; break;
		case '*':res=v1*v2; break;
		case '-':res=v1-v2; break;
		case '/':res=v1/v2; break;
		default: printf("Operação inválida");//flag para controlar o printf final
	}
	printf("%d %c %d=%f",v1,op,v2,res);
	return 0;
}
// função que contêm o ciclo switch
