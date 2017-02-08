#include <stdio.h>
int main(void) {
int a, b, r;
printf("Introduz a e b:\n ");
scanf("%d %d",&a,&b);
printf(" o m.d.c(%d,%d)= ",a,b);
while( a != 0 ) {
r= b % a; b = a; a = r;
}
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
