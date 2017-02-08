#include <stdio.h>
int main(void)
  {	
int n=-1,c=n;
//scanf("%d",&n);
while(n!=0)
{
	scanf("%d",&n);
	if (n%2==0)
	c++;
}
printf("o numero de pares na sequencia é %d\n",c);
  }
  
