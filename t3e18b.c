#include <stdio.h>
int main(void)
	{
	int ano;
	printf("qual o ano em causa\n"); scanf("%d",&ano);
	if (ano%4==0 && (ano%100!=0|| ano%400==0))
		printf("o ano %d é bissexto\n",ano);
	else 
		printf("this isn't a leap year\n"); 
	return 0;
	
/*
If ((year modulo 4 is 0) and (year modulo 100 is not 0)) or (year modulo 400 is 0) Then
  leapYear = true
 Else
  leapYear = false
 End if

*/
	}

