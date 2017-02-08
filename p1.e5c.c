#include<stdio.h>
int main(void) {
int x, m;
printf("Introduza um valor:");
scanf("%d",&x);
if (x < 0)
m = -x;
else
m = x;
printf("%d \n",m);
return 0;
	
