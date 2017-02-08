/*	#include <stdio.h>
	int main ()
	{
		char ch1,ch2;
		printf("Introduza um Caractere: ");
		scanf("%c",&ch1);
		printf("Introduza um Caractere: ");
		__fpurge(stdin);
*/



#include <stdio.h>

int main()
{
    char letra1, letra2;

    printf("Insira um caractere: ");
    scanf("%c", &letra1);

    fflush(stdin);
    __fpurge(stdin);

    printf("Insira outro caractere: ");
    scanf("%c", &letra2);

    printf("Você digitou: '%c' e '%c'\n", letra1, letra2);
	return 0;
}
