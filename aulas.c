#include  <stdio.h>
/*int fatorial(int n)
{
	fatorial(n) = n*fatorial (n-1);
	fatorial (1)=1;
	ou
	fatorial n = for (i=0;i<=n;i++);
	
}
*/
void
neg ()
{
  int z = 20;
  if (!z)
    printf ("Código de Z vale: %d\n", z);
}

int
draftfuction ()
{
  int fatorial = 10;
  int resposta = 1;

  for (; fatorial >= 1; --fatorial)
    {
      resposta *= fatorial;
      //resposta = resposta * fatorial;5 * 4 * 3 *2 *1
    }
  printf ("O numero fatorial e: %i\n", resposta);
  return 0;

}

void
aula13 ()
{
  int i = 0;
  while (i != 0)
    {
      printf ("Teste\n");
    }
  do
    {
      printf ("Teste do\n");
    }
  while (i != 0);
}

void
aula14 ()
{
  /*int idade = 033;
     int idd = 0x33;
     printf("Favor informar idade:\n");

     if (idade < 180)

     printf("A idd é:%i \te a do pai é:%d",idade,idd);//%Oi,%Oxi,
   */
  int idade;
  printf ("Informar idade\n");
  scanf ("%d", &idade);

  if (idade <= 5)
    printf ("bebê\n");
  else if (idade > 5 && idade <= 10)
    printf ("Criança\n");
  else if (idade > 10 && idade <= 18)
    printf ("Adolescente\n");
  else if (idade > 18 && idade <= 50)
    printf ("Adulto\n");
  else
    printf ("idoso\n");
}

int
aula16 ()
{
  /*int i;

     printf("Insira um nº inteiro de 1 a 5\n"); */
  return 0;
}

void
exer2 ()
{
  int first, second;
  puts ("Digite 2 numbers..");
  scanf ("%i%d", &first, &second);
  if (second == 0)
    puts ("Divisão por 0 nao permitido");
  else
    {
      if (first % second == 0)
	{
	  puts ("é divisível");
	  printf ("E o quociente de %i por %d é:%d \n", first, second,
		  first / second);
	}
      else
	puts ("not divisible");
    }
}

void
exerc3 ()			// ter em conta numero Pos e Neg.. numero !0 que é qdo para
{
  int num, inverted, div = 1;
  scanf ("%d", &num);
  inverted = num % 10;
  num /= 10;
  while (num != 0)
    {
      inverted *= 10;
      div *= 10;
      inverted += num % 10;
      num /= 10;
    }
  printf ("O número digitado é %i\n", inverted);
}

void
aula19 ()
{
  /*const */ int variavelInt = 10;
  printf ("%i\n", variavelInt);
  scanf ("%i", &variavelInt);
  printf ("%d\n", variavelInt);

  double varD = -10.10;
  printf ("%f\n", varD);
  scanf ("%lf", &varD);		// ao ler temos de por o Quantifier...
  printf ("%f\n", varD);

}

void
resol16 ()
{
  int i, n;
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)	// como 0 nâo aparece, então temos de ser nos a fazer o programa...
    printf ("%d %d\n", i, n - i + 1);
}

//*()
void
resol17 ()
{
  int i, j, n;
  char ch;

  printf ("Introd. um Nº: ");
  scanf ("%d", &n);
  printf ("Introd. um Char: ");
  scanf (" %c", &ch);

  for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= n; j++)
	putchar (ch);
      putchar ('\n');
    }
}

void
resol18 ()
{
  int num, multipl, i;
  puts ("Digite um num..");
  scanf ("%d", &num);
  puts ("____________");
  multipl = num / 10;
  for (i = num; i < (multipl + 1) * 10; i++)
    {
      if (i % 3 == 0)
	continue;
      else
	printf ("%i\n", i);

    }
  putchar ('\n');
}

void
breakcode ()
{
  int n = 33;
  /* conclusion-> aulas.c:166:2: error: break statement not within loop or switch
     break;
     ^
     break; */
  printf ("easy pizi%i", n);
}

void
Christmans_tree ()
{
  int ramos, i, j, contador;
  puts ("Digite o numero de ramos que pretende para a sua arvore");
  scanf ("%d", &ramos);
  for (i = 0, contador = 0; i <= ramos; i++)	// se puser i=1 não executa 1 ciclo (o dentro not satisfaz a condição) inultimente, que deixa somente 1a linha em branco
    {
      contador += i;
      for (j = 1; j <= i; j++)
	{
	  putchar ('*');

	}
      puts ("");		// or putchar('\n');
    }
  printf ("O numero de asteriscos (*) é: %d\n", contador);
}

/*
void piramide_alfabética()
{
	int letra=65,i,j,contador;
	char converte; 
	puts("Digite o numero de ramos que pretende para a sua arvore");
	scanf("%d",&ramos);
		for (i=0,contador = 0;i<=ramos;i++)
		{ contador += i;
			letra++;
			for (j=1;j<=i;j++)
				{
					converte = (char) letra;
					getchar("");
					putchar('',);
					
				}
		puts("");
		}
	printf("O numero de letras (*) é: %d\n",contador);
}
*/
void
cem_first ()
{
  int valor = 0;
  while (valor > 100 || valor < 1)	// boa cena como é que não me lembrei disto antes... utilizar o ciclo do ... while
    scanf ("%d", &valor);
}

/*int ASCIItable ()
{
	int i,jan=20;
	for(i=0;i<256;i++)
		while (jan>0)
		{
			jan--;
			printf("%3d --> %c\n", i,(char) i);
			continue;
		}
	getchar('c' || 'C');
	return 0;
}

#include <stdio.h>*/
int
tabela_ASCCI ()
{
  int i = 0;			//,j=20;
  char ch;			// o por o J como carga init...
  for (i = 1; i < 256; i++)
    {
      printf ("%d --> %c\n", i, (char) i);
      if (i % 20 == 0)		//(j>0)
	{
	  scanf (" %c", &ch);
	  switch (ch)
	    {
	    case 'c':
	      break;		//continue;
	    default:
	      puts ("Pressione c ou C, para continuar");

	    }
	  /*      else
	     {
	     scanf(" %c",&ch);
	     switch(ch)
	     {
	     case 'c': break;//continue;
	     default: {puts ("Go out");break;}
	     }
	     } */
	  //j--;

	}
    }
  return 0;
}



int
resolp11 ()
{
  int i, conta;
  char ch;
  for (conta = 1, i = 0; i <= 255; i = i + 1)
    {
      printf ("%3d --> %c\n", i, (char) i);
      if (conta == 20)
	{
	  do
	    {
	      puts ("Pressione c ou C para continuar ...");
	      scanf (" %c", &ch);	// para no ciclo seguinte não mandar, a mensagem pela tecla enter...
	    }
	  while (ch != 'c' && ch != 'C');
	  conta = 1;
	}
      else
	conta++;
    }
  return 0;
}

int
ASCII2 ()
{
  int n1, n2, Max, Min, i;
  puts ("DIgite os limites do intervalo!");
  scanf ("%d%i", &n1, &n2);
  if (n1 > n2)
    {
      Max = n1;
      Min = n2;
    }
  else
    {
      Max = n2;
      Min = n1;
    }
  i = Min;
  do
    {
      printf (" %3d --> %c\n", i, (char) i);
      i++;
    }
  while (i <= Max);		// for <= 
  return 0;
}

/*
int ASCII2Damas()
{
	int Max,min,tmp,i;
	puts//("Digite os valores que pretende apresentar com limites... comece no min e depois o max\n\n//( Introd. dois Nºs: ");
	scanf (" %d",&Max); scanf("%d",&min);
	while( nmin<0 || nmin // outra função para este tipo de ciclo...
	if (Max < min)
		{
			tmp= Max;
			Max=min;	desta forma é mais fácil to DO as trocas de valores de var's
			min=tmp;
		}
	for(i=min;i<=Max;i++) // ou ++i
	printf(" %3d --> %c\n", i, (char) i);
	//printf(" Os valores corretos da variáveis necessários são: "
	*/


void
aula30e31 ()
{
  void teste (void);		// desnecessário , bastava por o protótipo em cima
  teste ();
  teste ();
  teste ();
  //invalid space not recognized printf (" O valor associado é %d", variavelLocalEstatica);

  //return 0;
}

//      acesso à função variável vísivel a todas a minha funções, o modo é utilizar uma variável global ... Fora dos colchetes
int gVariavelGlobal = 2;
void
teste (void)
{
  int variavelLocalAutomatica = 2;	// é recriada.. qualquer valor que tenha antes é perdido (sempre que a chamam)
  variavelLocalAutomatica *= 2;
  static int variavelLocalEstatica = 2;	//Não perde o Valor e não fará esta Atribuição/Assignment  
  variavelLocalEstatica *= 2;	// o valor aproveita os valores calculados em chamadas anteriores a esta função!
  // differences a estática não perde o valor dela quando é chamada
  // logo não é automáticamente recriada ao ...
  // reserva espaço em memória a primeira vez, e não recria ela ao chamar novamente

  printf (" Local Automatica = %i\n ", variavelLocalAutomatica);
  printf (" Local Estática = %i\n ", variavelLocalEstatica);
}

int
main ()
{
  //draftfuction();
  //aula13();
  //aula14 ();
  //aula16 ();
  //exer2();
  //exerc3();
  /*while (1)
     aula19(); */
  //resol16();
  //resol17();
  //resol18();
  //breakcode();
  //Christmans_tree();
  //cem_first();
  //tabela_ASCCI ();
  //resolp11();
  /*neg();
     ASCII2();
     int x,i=5;
     x=i++;
     printf(" %d %d\n", i,x);
   */
  aula30e31 ();
  return 0;
}
