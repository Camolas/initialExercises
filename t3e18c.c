#include <stdio.h>
int main(void)
	{
	int ano;
	printf("qual o ano em causa\n"); scanf("%d",&ano);
	if (ano%4==0) 
		printf("o ano %d é bissexto\n",ano);
	else 
		printf("this isn't a leap year\n"); 
	return 0;
	}
