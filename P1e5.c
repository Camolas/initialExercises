 #include<stdio.h>
 int main(void) {
 int k, n=0, s = 1;
 scanf("%d",&k);
 while (n<=0)
 scanf("%d",&n);
 while(n > 0) {
 s += k;
 k = k * k;
 n = n - 1;
 }
 printf("a soma é %d",s);
 return 0;
 }
