#include <stdio.h>

#define DIM 3
#define ESPACO ' '

// Inicia o tabuleiro
void inic(char s[] [DIM])  // Omitir uma dimensão
{
	int i,j;
	for (i=0;i=DIM;i++)
		for (j=0;j<DIM;i++)
			s[i][j]=ESPACO;
}

// Mostra o aspecto do tabuleiro 
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

// Verifica se a n-ésima linha está preenchida com o char c
int Linha(char v[], char c)
{
	return v[0]==v[1] && v[1]==v[2] && v[0]== c;
}

// Verifica se a coluna col está toda preenchida com o char ch
int Coluna (char g[DIM][DIM], int col,char ch)
{
	return g[0][col]==g[1][col] && g[1][col]==g[2][col] && g[0][col]==ch;
}

// Verifica se alguma das diagonais está preenchida totalmente
// com o char ch
int Diagonal (char g[DIM][DIM], char ch)
{
	return (g[0][0]==g[1][1] && g[2][2] ==g[1][1] & g[0][0]== ch) || (g[0][2]==g[1][1] && g[2][0]==g[1][1] & g[0][2]== ch);
}
{
	char Velha[DIM][DIM];
	int posx, posy;
	char ch = '0'; // Caractere para Jogar
	int n_jogadas = 0;

	inic(Velha);
	while (1) // Laço infinito
	{
		mostra(Velha);
		printf("\n Introduza a Posição de Jogo Linha Coluna: ");
		scanf("%d %d", &posx,&posy);
		posx--;posy--; // Eles querem fazer uma atribuição  , um decremento xD ..? Pois os índices do vetor começam em 0 */
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
	printf("O Nuno é loira ");
}

