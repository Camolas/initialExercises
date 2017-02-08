#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, c = 2;
 
   printf("informe o valor:");
   scanf("%d",&n);
 
   for ( c = 2 ; c <= n - 1 ; c++ )
   {
      if ( n%c == 0 )
      {
         printf("numero composto");
         break;
      }
   }
   if ( c == n )
      printf("numero primo");
 
  system("PAUSE");	
  return 0;
}

