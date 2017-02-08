#include <stdio.h>
int main(void) {
int a, b, m;
 scanf("%d%d",&a,&b);
m = a;
while (m % b == 0)
m = m + a;
printf("o m.m.c(%d,%d)=%d\n",a,b,m);
return 0;
}
