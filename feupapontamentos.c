#include "utypes.h"
#include "video-text.h"
#include <stdio.h>
int main()
{
    int x ,y ;
    char caracter,*atributo[0],random[0];
    char *string = "Hello";
      
      
    printf("Teste 1. Introduzir coordena x: ");
    scanf ("%d", &x);
    printf(" Teste 1. Introduzir y:");
    scanf ("%d", &y);
    /*
    scanf ("%c", caracter); // para comer o newline
    printf(" Teste 1. Introduzir caracter:");
    scanf ("%c", caracter);
    scanf ("%c", atributo);
    printf(" Teste 1. Introduzir caracter atributo");
    scanf ("%c", atributo);
    scanf ("%c", random);
    */
      
    //printf(" Teste 4. Introduzir string");
    //scanf ("%s", string);
      
    //printStringAt(string, x+3, int y, char attributes)
    //printStringAt(string,x+1,y+1,atributo))
      
    //frame
        //printCharAt(caracter,1,1,1);
    scanf ("%c", caracter);
      
      
    printf(" Teste 4. Introduzir caracter  ");
    caracter = getchar();
    //printf(" Caracter: %c ", caracter);
      
      
    printCharAt(caracter,x+1,y,1);
    printStringAt("hello",x+2,y,1);
    printIntAt(9,x+3,y,1);
      
    drawFrame("*",3, 5, 5, 10, 10);
      
    /*
    if ( printCharAt('h',x,y,atributo[0]) == 1 && printIntAt(7, 15, 15, 2))
    {
    printf("Sucesso!");
    }
    else
    {
    printf("Inscesso!");
    }
*/  
      
      
} 
