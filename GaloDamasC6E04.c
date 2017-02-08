#include "stdio.h"

#define DIM 3
#define ESPACO ' '

// Por motivos de clareza de código o autor decidiu fazer a declaração das funções apesar de não ser necessário..
// pois vem antes da função principal do main!
void inic (char s[][DIM]);
void mostra (char s[DIM][DIM]);
int Ganhou (char g[DIM][DIM], char ch);
int Linha (char v[], char c);
int Coluna (char g[DIM][DIM], int col, char ch);


// Inicia o Tabuleiro
void
inic (char s[][DIM])		// Omitir uma dimensão
{
  int i, j;
  for (i = 0; i < DIM; i++)
    for (j = 0; j < DIM; j++)
      s[i][j] = ESPACO;
}

// Mostra o aspecto do tabuleiro
void
mostra (char s[DIM][DIM])	// Ambas as Dimensões
{
  int i, j;
  for (i = 0; i < DIM; i++) // 	Aqui os índices jogam de 0 a 2
    {
      for (j = 0; j < DIM; j++)
		printf ("%c %c", s[i][j], j == DIM - 1 ? ' ' : '|'); 
      if (i != DIM - 1)
			printf ("\n-----------");
      putchar ('\n');
    }
}

//verifica(){for ()} Verifica se a n-ésima linha está preenchida com o char c
int
Linha (char Ln[], char c)	// este int é de Verd ou Falso binário é um bool
{
  return Ln[0] == Ln[1] && Ln[1] == Ln[2] && Ln[0] == c;
}

// Verifica se a coluna col está toda preenchida com o char ch
int
Coluna (char v[DIM][DIM], int col, char ch)
{
  return v[0][col] == v[1][col] && v[1][col] == v[2][col] && v[0][col] == ch;
}

int
Diagonal (char v[DIM][DIM], char ch)
{
  return ( (v[0][0] == v[1][1])  && (v[1][1] == v[2][2]) && v[2][2] == ch)
    || (v[2][0] == v[1][1] && v[2][0] == v[0][2] && v[0][2] == ch);
}

int
Ganhou (char M[DIM][DIM], char ch)
{
  //return Diagonal(M[DIM][DIM],ch) || Coluna( ... esquece com os if's detecto as codinções em que se verificam Afirmaço ou Falsidades e aí sim detetam passa a verdadi !!
  // e usar um ou - exclusivo!??!
  if (Linha (M[0], ch) || Linha (M[1], ch) || Linha (M[2], ch))	// se linha 1 ou 2 ou 3 tiverem totalmente preenchida com o carater do jogador
    return 1;			//Ganha(1)
  if (Coluna (M, 0, ch) || Coluna (M, 1, ch) || Coluna (M, 2, ch))
    return 1;
  if (Diagonal (M, ch))
    return 1;
  return 0;			// Não ganhou
}

int
main ()
{
  char Velha[DIM][DIM];
  int posx, posy;
  char ch = '0';		// Caractere para Jogar
  int n_jogadas = 0;

  inic (Velha);
  while (1)			// Laço infinito
    {
      mostra (Velha);
      printf ("\n Introduza a Posição de Jogo Linha Coluna: ");
      scanf ("%d %d", &posx, &posy);
      if (posx > DIM || posy > DIM)
      {
	printf ("\n\n****Valores Inválidos****\n\n");
	continue;		// Próxima iteração
      }
      posx--;
      posy--;			// Eles querem fazer uma atribuição  , um decremento xD ..? Pois os índices do vetor começam em 0
      if (Velha[posx][posy] == ESPACO)	// Casa livre
	{
	  Velha[posx][posy] = ch = (ch == '0') ? 'X' : '0';
	  n_jogadas++;

	  if (Ganhou (Velha, ch))	/* Basta verificar o jogador corrente */

	    {
	      printf ("\n\n**** Ganhou o Jogador %c ****\n\n", ch);
	      break;
	    }
	}
      else
	printf ("Posição já ocupada\nJogue Novamente!!!\n");
      if (n_jogadas == DIM * DIM)
	{
	  printf ("\n\n**** EMPATE TÉCNICO ****\n\n");
	  break;		// Acabar o Programa
	}
    }
  mostra (Velha);
  return 0;
}
