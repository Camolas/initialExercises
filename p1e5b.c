#include<stdio.h>
int main(void) {
int a, b, q;
scanf("%d %d",&a,&b);
q = 0;
while ( a > b) {
q++;
a -= b;
}
printf("o quociente e %d\n",q);
return 0;
}
