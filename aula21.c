#include <stdio.h>
int main(void)
	{
		for (int i =1; i<= 10;i=1+i)
		{
			printf("***Volta  %i**\n", i);
			for (int j =1;j<11;++j)
			{
				printf("Ponto %i\n",j);
			}
			puts("");
		}	
		
		puts("");
		return 0;
	}

