#include "stdio.h"
int main()
{
	int m=5;
	int n=3;
	
	m=n=(n == 3)? 1: 0;
	printf("%d",m);
	return 0;
	
}
