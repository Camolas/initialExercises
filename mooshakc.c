#include <stdio.h> 
#define MAX 100
#define TN-100
int abs (int x)
{
	if (x<0)
		return -x;
	return x;
}
/*em vez char as bibliotecas para a função absoluto, optou por definir a função*/ 
int main ()
{
	int e1,e2,andar;
	scanf("%d%d%d",&andar,&e1,&e2);
	if (e1==999 && e2===999)
		printf("0\n");
	else if (abs(e1-andar)< abs(e2-andar))
		printf("1\n");
	else if (abs(e1-andar) > abs (e2-andar))
		printf("2\n");
	else if(e1!=999 && e2==999)
		printf("1\n");
	else if (e1 == e2)
		printf("1\n");
	else if(abs(e1-andar)==abs(e2-andar)){
		if(e1>e2)
			printf("1\n");
		else
			printf("2\n");
		}
		return 0;
}
