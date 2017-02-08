#include <stdio.h>
int digit();
int c07()
{
	int n,soma=0;
	long int produto=1; // são os elementos neutros
	printf("escreve o valor para n\n");scanf("%d",&n);
	printf("A soma de %d ",n);
	for (n=n;n>0;n--)
		{
			soma += n;
			produto *= n;
		}
	printf("será %d enquanto o produto é %ld \n",soma,produto);
return 0;
}
void c013()
{
	int i,j;
		for (i=1;i<11;i+=1)
		{
			j=1;
			do
			{ 
			printf(" %d",j);
			j+=1;
			}
			while(j<=i);
			putchar('\n');
		}	
}
void exemplo_p96()
{
	int i=0,pag97=3;
	if(++i)
	printf("\n%d\n",i);
	pag97 = i-- + pag97 + i;// aparece um erro de um warning: operation on ‘i’ may be undefined [-Wsequence-point]
	printf("%d",pag97);
}


int tabela_ASCCI ()
{
    int i=0,j=20,ch; // o por o J como carga init...
    for(i=0;i<256;i++)
    {
        if(j>0)
        {
        printf("%d --> %c\n",i,(char) i);
        }
        else
        {
            scanf("%i",&ch);
            switch(ch)
            case 'c': j=21;//continue;
        }
        j--;
    }
 return 0;      
}
int resolp11()
{
    int i,conta;
    char ch;
    for (conta=i=0;i<=255;i=i+1)
    {
        printf("%d --> %c\n",i, (char) i);
        if(conta==20)
         {
            do
            {
                puts("Pressione c ou C para continuar");
                scanf(" %c", &ch);
            }
            while(ch != 'c' && ch != 'C');
        conta=1;
         }
        else
            conta++;
    }
    return 0;
}
int main ()
{
	c013();
	exemplo_p96();
	
    resolp11();
    printf("Hello, World!\n");
    digit();
    return 0;
	return 0;
}



#include <ctype.h> // não parece haver problema a bilbioteca estar declarada aqui para baixo, .. será por ser uma diretiva e passa logo ao que interessa..
int digit()
{
	char c;
    c='5';
    printf("Result when numeric character is passed: %d",isdigit(c));
    c='+';
    printf("\nResult when non-numeric character is passed: %d\n",isdigit(c));
    return 0;
}

