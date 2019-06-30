#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *pf;
int NUM = 88;
int pilido;
if((pf = fopen("arquivos/arquivo.bin", "wb")) == NULL) /* Abre arquivo binário para escrita */
{
printf("Erro na abertura do arquivo");
exit(1);
}
if(fwrite(&NUM, sizeof(int), 1,pf) != 1)     /* Escreve a variável NUM | o operador sizeof, que retorna o tamanho em bytes da variável ou do tipo de dados. */
printf("Erro na escrita do arquivo");
fclose(pf);                                    /* Fecha o arquivo */
if((pf = fopen("arquivos/arquivo.bin", "rb")) == NULL) /* Abre o arquivo novamente para leitura */
{
printf("Erro na abertura do arquivo");
exit(1);
}
if(fread(&pilido, sizeof(int), 1,pf) != 1) /* Le em pilido o valor da variável armazenada anteriormente */
printf("Erro na leitura do arquivo");
printf("\nO valor de NUM, lido do arquivo e': %d \n\n", pilido);
fclose(pf);
return(0);
}
