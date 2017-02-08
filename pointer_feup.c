
#include <stdio.h>

/*void pointer()

{
	float x[5] = {1, 1.5, -1.2, 2.7, 0.3};
	float *px; printf("\t%d\t",*px);
	px = x;         // px aponta x[0]; equivalente a px = &x[0] 
	px = &x[3]; printf("%d\n",*px);
	return;
}*/
// Exemplo 6.3
/*
int main()
{
    float x = 2.53;
    float *px = NULL;
	float v[]={8,2,2,3};
	printf("%f\t",&v);
	//pointer();

    px = &x;
    printf("%f\n", *px );


    *px = x*x;
    printf("%f\n", *px );
}
*/
 //Exemplo 6.5
#include <stdio.h>

int main()
{
        float x[3] = {2.5, -1.0, 7.3};
        float *px;

        px = x; //inicia-o com o & do primeiro elemento do vetor...
        printf("%f\n", *px );    /* escreve 2.5  */
        px++;/* tlv pela declaração ele já sabe que são 4 as posições de memoria a incrementar!!
        printf("%f\n", *px++);   /* escreve -1.0 e depois é que incrementa o valor*/
        printf("%f\n", *px );    /* escreve 7.3  */
        return 0;
}



//Exemplo 6.6 , Escrita por ordem inversa dos caracteres de uma string, usando apontadores.
/*
#include <stdio.h>

main()
{
        char s[]="abcd";
        char *ps = s;
        int i;

        for (i=3; i>=0; i--) printf("%c", *(ps+i));
        printf("\n");
}
*/
