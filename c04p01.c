#include <stdio.h>
//#define TABUADA 5
void tabuada()
{
	const int tab=5;
	int i=0;
	//scanf("%d",&tab); warning: writing into constant object (argument 2) [-Wformat=]

	while (i<11)
	{
		printf("%d * %2d = %d\n",tab,i,tab*i);
		i++;//i += 1; // ou i=i+1 
	}
	
}
void Tabpick()
{	int num, i=0;
	printf("Digite o tal Num! : "); scanf("%d",&num);
	while (i<11)
	{
		printf("%d * %2d = %d\n",num,i,num*i);
		i++;//i += 1; // ou i=i+1 
	}
}

void tabuadafirst()
{
	int tab = 0,i = 0;
	//scanf("%d",&tab); warning: writing into constant object (argument 2) [-Wformat=]
	while (tab < 6)
	{
		putchar('\n');//puts("");// linha em branco... DESVATAGEM: apanha antes de se quer esta no início da tabuada, logo por no final é o mais indicado..
		while (i<11)
		{
			printf("%d * %2d = %d\n",tab,i,tab*i);
			i++;//i += 1; // ou i=i+1 
		}
	tab += 1;  // Sim passa a tabuada seguinte 
	i = 0;// este tab podia estar logo depois da condição... entre os 2 ciclos (1º e 2º)!
	}
	
}
void tabuadafirstf()
{
	int tab=0 ,i;
	//scanf("%d",&tab); warning: writing into constant object (argument 2) [-Wformat=]
	for (/*tab = */i= 0;tab < 6;tab += 1)
	{ 
		;//puts("");// linha em branco... DESVATAGEM: apanha antes de se quer esta no início da tabuada, logo por no final é o mais indicado..
		for (putchar('\n') /*i=0*/;i<11;i=i+1)
		{
			printf("%d * %2d = %d\n",tab,i,tab*i);
		}
		i=0;
	}
	
}

void awhile()
{
int i = 0;
while (i<11)
	{
		printf("%d\n",i);
		i++;//i += 1; // ou i=i+1 
	}
}
int afor()
{
	int i;
	for (i=1;i<=10;i+=1)
		printf("%d\n",i);
	return 0;
}
int main ()
{
	//awhile();
	//tabuada();
	//Tabpick();
	tabuadafirstf();
	return 0;
}
