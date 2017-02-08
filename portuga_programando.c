#include <stdio.h>


int x_toupper_(char letra)
{
  int i;
  for (i=0/* puts("Let's Go .. tenta novamente*/;;i++)
  {
  if(!(letra<123 && letra>=97)) // 
  {
   puts("Tenta de novo ...");
   scanf("%c",&letra);
   continue; // passa à frente...
  }
  else
  letra=(int) letra-32;
  printf ("O que queres é:\n %c",letra);
  break;
}
printf("\nÁ %dª tentativa consegui-mos arrancar ...\n",i);
return 0;
}


void X_toupper()
{
char c='f';
int j='A' - 'a';
puts("Digite a letra pretendida");
scanf(" %c",&c);
c = (int) c;
printf("%d",c);
printf("%d",(int) c);
printf("%c",c);
while (!(c<120 && c>97))// ! 97<c && c<120 acho que será mesmo obrigatório o uso de () colchetes 
{
   puts("Tenta de novo2 ...");
   scanf("%c",&c);
}
printf("%d\n",j);
c=(int) c-32; printf ("O que queres é:\n %c\n",c);
}


void  X_toupper3()
{
int c;
puts("Digite a letra pretendida");
scanf("%d",&c);
while (!(c<120 && c>97)) // c<97 || 120<c
{
   puts("Tenta de novo3 ...");
   scanf(" %d",&c);
   while(getchar()!='\n');
}
c= c-32; printf ("O que queres é:\n %c\n",c);
}



int main()
{
x_toupper_(69);
X_toupper();
X_toupper3();
/* int x,y;
puts("Digite valor para x e \nDigite valor para y"); scanf("%d%d",&x,&y);
max(x,y);
prog7(x,y);
printf("%d\n",max(x,y));  */
//printf("%d\n%d\n",sum(4,9),soma(3.3,5.21));
return 0;
}
