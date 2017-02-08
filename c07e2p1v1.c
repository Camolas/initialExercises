#include "stdio.h"
#include "ctype.h" // vamos utilizar estas Funções que já demos !!
int strcount(char s[])
{
//char ch; // dado ser fornecida uma string eu vou mas é verificar se o index  da string corresponde ou não ..
int i, contador = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if ( isalpha(s[i]))
            contador++;//ch = getchar(); dá forma que estava a pensar se não fosse passada por parâmetro
    }  
    return contador;
}

int main()
{
    printf( " A frase:\" %s tem %d carateres alfabéticos\"\n", "Ontem fui comprar um electrodoméstico", strcount("Ontem fui comprar um electrodoméstico"));
    return 0;
}
