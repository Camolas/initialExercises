#include <stdio.h>
int dot8()
{
	int i,j;
	for (i=1; i<=5; i=i+1)
	{
		for(j=1; j<=10;j++)
			printf("%2d * %2d = %d\n",i,j,i*j);
		if (i != 5) /* para não parar na última */
			{	printf("Pressione <ENTER> para continuar ...");
				getchar();
			}
	}
return 0;
}
void dot9()
{
	char opcao;
	scanf ("%c",&opcao);
	puts("**\t  Menu Principal\t **");
	puts("-Clientes\n-Fornecedores\nEncomendas\nSair\n");
	do
	{
			switch(opcao)
			{
			case 'C'|| 'c':
				printf("Clientes "); break;
			case 'e':
			case 'E':
				printf("Encomendas"); break;
			case 'F':
			case 'f':
				printf("Fornecedores"); break;
			default: getchar();
			}
	}
	while (opcao!='S'|| opcao!='s' );
}
void dot10()
{
	char opcao;
	do
		{
			printf("\t MENU \t PRINCIPAL\n"),
			printf("\n\n\t\tClientes");
			printf("\n\n\t\tFornecedores");
			printf("\n\n\t\tEncomendas");
			printf("\n\n\t\tSair");
			printf("\n\n\t\tOpção");
			scanf(" %c", &opcao);
			//fflush (stdin); /* Limpar Buffer do teclado */
			switch (opcao)
			{
				case 'c':
				case 'C': puts("Opção CLIENTES"); break;
				case 'f': 
				case 'F': puts("Opção Fornecedores"); break;
				case 'e':
				case 'E': puts("Opção Encomendas"); break;
				case 's': 
				case 'S': break; /* Não faz nada */
				default : puts("Opção INVÁLIDA!!!");
			}
		getchar (); /* Parar a tela */
		}
	while (opcao!= 's' && opcao != 'S');
}
int main()
{
dot10();	
return 0;
}
