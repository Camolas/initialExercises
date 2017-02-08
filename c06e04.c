#define DIM 3
#define ESPACO ' '

void inic(char s[] [DIM])  // Omitir uma dimensão
{
	int i,j;
	for (i=0;i<DIM;i++)
		for (j=0;j<DIM;i++)
			s[i][j]=ESPACO;
}

void mostra(char s[DIM][DIM]) // Ambas as Dimensões
{
	int i,j;
	for (i=0; i<DIM; i++)
	{
		for(j=0;j<DIM;j++)
			printf("%c %c",s[i] [j], j==DIM -1? ' ': '|');
		if (i!=DIM-1) printf("\n-----------");
		putchar('\n');
	}
}

//erros
erro1()
{
	int v[],i;
	for (i=0;i<10;i++)
	{
		v[i] = 0;
		v[i] = 101;
	}
}

erro2()
{
	int i;
	int v[3] = {10,20,30,40,50};
	for (i=0;i<10;i++)
		v[i] = 0;
	v[i] = 101;
}

erro3()
{
	int v[MAX];
	for (i=0; i<10 ; i++)
		v[i] = 0;
	v[i] =101;
}

//verifica(){for ()}

int main()
{
	erro1();
	/*
	char Velha[DIM][DIM]=0;
	mostra(Velha);
	int posx, posy;
	char ch = '0'; // Caractere para Jogar
	int n_jogadas = 0;

	inic(Velha);
	while (1) // Laço infinito
	{
		mostra(Velha);
		printf("\n Introduza a Posição de Jogo Linha Coluna: ");
		scanf("%d %d", &posx,&posy);
		posx--;posy--; // Eles querem fazer uma atribuição  , um decremento xD ..? Pois os índices do vetor começam em 0
		if (Velha[posx][posy]==ESPACO) // Casa livre
		{ Velha[posx][posy]= ch = (ch == '0') ? 'X' : '0';
		  n_jogadas++;
		}
		else
			printf("Posição já ocupada\nJogue Novamente!!!\n");
		if (n_jogadas == DIM*DIM)
			break; // Acabar o Programa
	}
	mostra(Velha);
	* */
}
