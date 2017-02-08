#include <stdio.h>
int main(void)
  {	
	  int x;
	  puts("escreve o valor à dar a variável");
	  scanf("%d",&x);
	  x=x==0? printf("é zero\n"):printf("não é  zero!!\n");// inicio 1ªfase:x=0 2ªfase:x==0
		return 0;
	}
