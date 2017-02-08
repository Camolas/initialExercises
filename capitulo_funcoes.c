#include <stdio.h>
#include <math.h>
#include <ctype.h>
int
linha ()
{
  int i, num;
  for (i = 1, num = 0; i <= 20; i++)
    {
      putchar ('*');
      num += 1;
    }
  printf ("\n");		//"%d\n",num); putchar('\n');
  return 0;
}

void
three ()
{
  int j;
  linha ();
  puts ("Números entre 1 e 5");
  linha ();
  for (j = 1; j <= 5; /*++ */ j = j + 1)
    {
      printf ("%d\n", j);
    }
  linha ();
}

void
linha3 ()
{
  int i = 1;
  for (; i <= 3; i++)
    {
      putchar ('*');
    }
  putchar ('\n');
}

void
linha5 ()
{
  int j;
  for (j = 0; j < 5; ++j)
    printf ("*");
  putchar ('\n');
}

void
linha7 ()
{
  int k;
  for (k = 0; k < 7; k++)
    printf ("*");		//,1+k);
  putchar ('\n');
}


void
four ()
{
  linha3 ();
  linha5 ();
  linha7 ();
  linha5 ();
  linha3 ();
}

int
isequal (int x, int y)
{
  if (x == y)
    {
      return (x == y);
    }
  else
    return 0;
}

/*int x_isdigit()
	{
		char ch;
		puts ("Digite um carater de acordo com a sua liberdade");
		scanf("%d",&ch);
		if ( ch < 																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																												 
	}
	*/
int
x_toupper ()
{
  char ch;			//1º passo: verificar se o carater dado é minúscula
  puts ("Digite um codigo...");
  scanf ("%c", &ch);
  if (ch > 96 && ch < 123)	// (ch => 'a' && ch <= 'z'
    //2º passo: caso seja verdade este retornará o carater Maiúsculo correspondente ver a diferença da Gama
    {
      ch -= (int) 22;
      //3º caso no seja, não faz nada ou passa à frente...
    }
  return ch;
}

float
Pot (float x, int n)
{
  float result = 1;		// elemento neutro, senão é provável que inicie a 0 , Que é o ELEMENTO ABSORvente!!
  int i;
  for (i = n + 1; i > 0; i--)
    {
      //printf("Intermédio= %f",result);
      if (i != 1)
	result *= x;
      else
	result *= 1;		// break; //not necessary conforme o programa está! until now
    }
  return result;
}

float
Pot2 (float x, int n)
{
  float res;
  int i;
  for (i = 1, res = 1.0; i <= n; i++)
    res *= x;
  return res;

}

int
Abs (int x)
{
  if (x < 0)
    x = -x;
  else
  return x;
}

float
VAL (float x, int n, float t)
{
  float res = 0.0;
  for (; n > 0; n--)
    res += x / pow (1 + t, n);

  return res;
}

long int n_segundos2 (int n_horas)
{
	return n_horas *3600L;
}

long int
n_segundos (int n_horas)
{
  return (long) n_horas *60 * 60;	//casting pois o n_horas esta definido como int somente 
}

long int
num (int n_horas, char tipo)
{
  switch (tipo)
    {
    case 's':
      return n_segundos (n_horas);	//n_horas*3600;
    case 'm':
      return n_horas * 60;
    default:
      return n_horas;
    }
}

long int
num2 (int n_horas, char tipo)
{
  long res = n_horas;
  switch (tipo)
    {
    case 's':
    case 'S':
      {
	res = res * 60;
	printf ("A-%ld", res);
      }
    case 'm':
    case 'M':
      res *= 60;
      printf ("B-%ld", res);
    }
  return res;
}

float
Max (float x, float y, float w)
{
  if (x > y)
    if (x > w)
      return x;			// x>y e x>w
    else
      return w;			// w>x>y
  else if (y > w)
    return y;			// y>w & y>x
  else
    return w;			//w>y>x
}

int
Impar (int x)
{
  return x % 2;	printf("\v");		// como o resto ou é 0 ou é 1,temos ou impar quando resto é 1, aproveita-mos diretamente para o return...
}

int
Entre (int x, int lim_inf, int lim_sup)
{
  int y = ((x > lim_inf) & (lim_sup > x));
  printf ("%d ya\n\t", y);
  //if( y) 
  return y;

}


//11.1 Verdade caso c seja dígito. Falso, caso contrário.
int
is_digit (char c)
{
  // printf ("%d\t%c", (int) c, c);
  if (Entre ((int) c, 48, 57))
    return puts ("True");
  else
    return puts ("False");

}

int is_alpha (char c)
{
	return ((c>='a') && (c<='z')) || ((c-32>'a') & (c-32<'z'));
}

//caso seja letra do az Mai ou minusc ---> True
int
is_alnum (char c)
{
//printf("%d",(int) c);
if (is_alpha(c) || Entre ((int) c,65,90) || Entre ((int) c-32,65,90) ) 
	return puts("Verdade");
else 
	return puts("Mentira");
}
int is_Lower(char c)
{
/*	c = (int) c;
	if ( c > 65 && c < 97) 
		return puts("True"); 
	else
		return puts("False");
em vez de andar com estes casting sujeitos a erros uso logo o direto pois é automático 
* comparadores entre char's lá está
		*/					
return c>='a' && c<='z';
}

int is_Supper(char c)
{
	int bool= c >= 'A' && c <= 'Z';
	printf("%d",c >= 'A' && c <= 'Z');
	return bool;
	
}
int is_space(char c)
	{
		return c=='\t' || c=='\n' || c==' ';
	}
char to_lower(char c)
	{
		if (isupper(c)); // so no caso de ser MAISusc. é que se vai proceder a uma alteração ...if (c > 'A' && c < 'Z') 
		{
		 c += 32; printf("%d",c);
		return c;
		}
	}
	
int main ()
{
	char c;
  //three();
  //four();
  //printf("%d\n",isequal(1, 3+2));
  //printf("%d\n",x_toupper());
  //printf("Resultado = %f \n", Pot(3.5,2));
  //printf("%f %f %f\n%f %f %f\n", Pot(2.0,4), Pot(1.234,3), Pot(3.0,0),Pot2(2.0,4), Pot2(1.234,3), Pot2(3.0,0)); 
  // Só faltava uma função para verificar que os 2 valores são =s ...
/*  putchar ('\n');
  printf ("%d\n%d\n%f,\n%ld\t%ld", Abs (3), Abs (-8.33), VAL (1.5, 3, 1.3),
	  sizeof (n_segundos (1)), n_segundos (4));
  printf ("\n%ld\n%ld\n%ld", num (20, 'm'), num (6, 's'), num (77, '\n'));
  printf ("\n%f", Max (7, 9, -20));
  printf ("\n%ld \n%ld \n%ld\n", num2 (3, 'h'), num2 (5, 'm'), num2 (3, 's'));
  if (Impar (9))
    printf ("True!");
  else
    puts ("FAlso");
  puts ("");
  printf ("\n A afirmação esta entre os valores... R: %d\n Será digito? ",Entre (4, 0, 9));
  is_digit ('7');
  printf("%d",is_alpha('r'));printf("%d",is_alpha('H'));
	is_alnum('T'); 
*/
  /*int var1 = 'd';
  if( isalpha(var1) )
   {
      printf("var1 = |%c| is an alphabet\n", var1 ); 
   } senão colocar a biblioteca ctype ela dá um warning mas continua a executar...
   
printf("%d\t%d\t%d\t%d\n",is_Lower('x'),is_Lower('Y'),is_Lower('8'),is_Lower(88));
puts("---Comparation---");
printf("%d\t%d\t%d\t%d\n",islower('x'),islower('Y'),islower('88'),islower(88));
printf("%ld\n",n_segundos2(33)); // igual ao casting realizado na pág. 76 do livro do Damas...
*/
	scanf("%c",&c);
	printf("%c\n", tolower('z'));
return 0;
}

/*
void tiro (int x)
	switch(x)
		{
			case 1: printf("\n Este teste é mesmo fácil");
			case 2: printf("\nAi de quem diga o contrário...");
			return;
			 */
