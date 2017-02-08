#include <stdio.h>
#define TABUADA 5
int main ()
{
  int i,resultado;
  i=1;
  while (i<=10)
	resultado =  TABUADA*i;
    printf("%2d*%4d=%2d\n ",TABUADA,i,resultado);
    i++;
    return 0;
}
