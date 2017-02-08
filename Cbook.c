/*
Jogo do Galinho * main.c
 *
 *  Created on: Jul 5, 2016
 *      Author: xpto
 */

#include <stdio.h>
#define DIM 3
#define ESPACO ' '

void inic(char s[][DIM])
{
	int i,j;
	for(i=0;i<DIM;i++)
	for(j=0; j<DIM; j++)
		s[i][j]=ESPACO;

}

void mostra( char s[DIM][DIM]) //AMBAS as DIMENSÕES iguais..
{
	int i,j;
	for  (i=0; i<DIM; i++)
	{
		for(j=0;j<DIM;j++)
			printf("%c %c", s[i][j], j==DIM-1?' ':'|');
		if( i!=DIM-1) printf("\n-------");
		putchar('\n');
	}

}


int main()
{
	char Velha[DIM][DIM];
	int posx, posy;
	char ch = '0'; // Caractere para Jogar
	int n_jogadas = 0;

	inic(Velha);
	while (1)  // Laço infinito
	{
		mostra(Velha);
		printf("\nIntroduza a Posição de Jogo Linha Coluna: ");
		scanf("%d %d, &posx, &posy");
		posx-;posy-;  // Pois os índices do vetor começam em 0
		if (Velha[posx][posy]==ESPACO) // Casa Livre
		{ Velha[posx][posy] = ch = (ch == '0') ? 'X' : '0';
		n_jogadas++;
		}
		else
			printf("Posição já ocupada\nJogue Novamente!!!\n");
		if (n_jogadas==DIM*DIM)
			break; // Acabar o Programa
	}
	mostra(Velha);
}
