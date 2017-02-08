#include<stdio.h>
int main(void) {
int k, n, s = 1;
scanf("%d", k);
while(n != 0) {
s = k;
k = k * k;
n = n - 1;
}
printf("a soma e %d",s);
return 0;
}
