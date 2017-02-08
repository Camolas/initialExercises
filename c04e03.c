#include <stdio.h>
# TABUADA 5
int resultado (int TABUADA,int i)
  return TABUADA*i;
int main ()
{
  int i;
  i=1;
  while (i<=10)
    printf("%2d*%4d=%2d ",TABUADA,i,resultado);
}

