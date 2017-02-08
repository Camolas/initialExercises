#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num, alea, qtd=0;
    printf("Informe numero inteiro de 0 ate 99\n");
    scanf("%d", &num);
    srand(time(NULL));//gera numero aleatorio toda vez q executar o programa
    alea=rand()%100;//%100 gera de 0  a 99 ai você define o valor q quiser
    printf("nuemro gerado %d\n\n", alea);//mostra o numero gerado qso nao queiro só apagar*/
    while(num!=alea)
    {
       
         if(num<alea)
         {
              qtd++;
              printf("ops. numero menor, aumente um pouco\n\n");
              printf("Informe outro numero inteiro de 0 ate 99\n");
              scanf("%d", &num);
              }
        else
         {
              qtd++;
              printf("ops. numero maior, diminua um pouco\n\n");
              printf("Informe numero inteiro de 0 ate 99\n");
              scanf("%d", &num);
              }
}
      printf("Número correto %d, quantidade de tentativas %d\n", alea, qtd);
  }
