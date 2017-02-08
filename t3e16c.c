#include <stdio.h>
int main(void)
  {	
	  int x;
	  puts("escreve o valor à dar a variável");
	  scanf("%d",&x);
	  switch(x) {
	   case 0:
		printf("o numero é zero\n");
		break;
		default: 
			printf("\no numero não é zero\n");
		}
		return 0;
	}
