#include <stdio.h>
int main(void) 
{
int a, b, r,c=0;
printf("Introduz a e b:\n ");
scanf("%d %d",&a,&b);
printf(" o m.d.c(%d,%d)= ",a,b);
while( a != 0 )
  {
    r= b % a;
    if(r!=b) c++; b = a; a = r;
  }  
  if (c=1) printf("os números são primos entre si");
 // caso um dos numeros for zero if (c=0) printf
printf("%d\n",a);
return 0;
}
/*(a) Seguindo o programa calcula
mdc
(
76
;
34
) e
mdc
(
224
;
7
).
(b) Modica o*/
