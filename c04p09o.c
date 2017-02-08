#include <studio.h>
int main 
	{
		char opção;
		do
		{
		puts("Digite uma das opções para o seu trabalho");
		
		switch(opção)
			case 'c':
			case 'C':printf("Clientes"); break;
			case 'e':
			case 'E':printf("Encomendas");break;
			case 'f':
			case 'F':printf("Fornecedores");break;
			case 's':
			case 'S':printf("Sair");break;
			scanf("%c",&opção);
		}
		while
			
			
