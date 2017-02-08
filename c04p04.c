#include <stdio.h>
main()
{
int e=1, i;
i=0;
while(i<11)
	{	i=i+1;
		printf("tabuada do %d:\v",i);
		while (e<=10) 
		{
			printf("%d * %d=%d\n",i,e,i*e);
			e++;/*i=i+1*/
		}
	}
printf("tabuadas representativas no intervalo de 1 a 10\n");
}
