#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{      
    /*  0(zero) é verdadeiro(true), e 1(um) é falso(false), em C usa-se números! */
    if(remove("arquivos/Faded") == 0){
    printf("Arquivo removido com sucesso!\n");
  }else{
      printf("Não removido, talvez não exista.\n");
    }
return(0);
}
