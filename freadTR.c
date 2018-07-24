#include <stdio.h>
#include <stdlib.h>

int main()
{
// Declaramos um ponteiro(link para o endereço da memória) para o arquivo de nome: 'pf'
FILE *pf;
char conteudo[100];

pf = fopen("arquivos/texto.txt", "rb"); /* Abre o arquivo novamente para leitura */

fread(&conteudo, sizeof(char), 100,pf); /* Le em conteudo o valor da variável armazenada anteriormente pf */

printf("\nO conteúdo do arquivo é':\n %s \n", conteudo);

fclose(pf);

return(0);
}
