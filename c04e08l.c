
#include <stdio.h>
int main (void)
{
	int TAB,n;
	for (TAB=1;TAB<=5;TAB++)
		{
		
			for (n=1;n<11;n=n+1)
				{
					printf("%2d * %2d=%3d\n",n,TAB,n*TAB);
				}
			if (TAB!=5)
				{
					printf("eSpeRO que digites um carater para poder avançar na execução do programa");
					getchar();
				}
		}
return 0;
}
