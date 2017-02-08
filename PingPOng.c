#include <stdio.h>
#include <string.h>
void Pong(int x);
void Ping(int i)
{
	switch(i)
	{
		case 1:
		case 2:
		case 3: while(i--)
					printf("\n%d",i);
				break;
		case 25: Pong(3);
				break;
		default: printf("\nJá passei em C");
				 Pong(123);
			 }
		 }
void Pong(int x)
{
int j=0;
switch (x)
	{
		case 1:
		case 2: Ping(x);
		case 3: j=5;
				//j++;
				return;
		default: printf("\nOla");
				return;
	}
printf("\nVou Sair");
}

int main()
{
	/*Pong(3);
	Ping(-4);
	Ping (25);
	Pong(2);
	Pong(1);
	return 0;*/
	char s[200], outra [169];
	printf("Qual a sua String? "); gets(s);
	/* Colocar na string uma outra cópia da string s */
	strcpy(outra,s);
	printf("String Original: %s\nCópia: %s\n",s,outra);
	return 0;
}
