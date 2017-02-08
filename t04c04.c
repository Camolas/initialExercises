#include <stdio.h>
int main (void)
	{
		int i=0,tab;//i;
		puts("Digite a tabuada que desejar");
		scanf("%d",&tab);
		while(i<=10)
		{
			printf("%d * %3d = %2.5d\n",tab,i,tab*i);
			i=1+i;
		}/*for(i=0;i<11;i+1)
		{
			printf("%d * %d = %d\n",TABUADA,i,TABUADA*i);
		}*/
		return 0;
	}

/* int n,num;
 * 	printf("Introd. um  Nº: "); scanf("%d",&num);
 * n=1;
 * while (n
