#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
FILE *fp;

fp = fopen("arquivos/fputs.txt", "w+"); // subscreve, passa por cima!!

fputs("Esta é a programação c.", fp); 
fputs("Esta é uma linguagem de programação do sistema.", fp);

fclose(fp);

return(0);
}
