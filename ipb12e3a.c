#include <stdio.h>

int calcular (int n)
{
 int b=3;
if (n%b==0) b=2*n;
else b=n/2;
return b;
}
int main( )
{

int nd=7,n=7,d=12;
printf("-->");
d=n;
do
	{
	nd=calcular(n);
	printf("%4d",nd);
	n=(nd>2)?n+1:n-3;
	d-=3;
	} 
while (d>=0);
printf("\n-->n=%d nd=%d",n,d);
return 0;
}
