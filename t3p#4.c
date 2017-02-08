#include <stdio.h>
int main(void)
  {
	int n=1,cBoa=0,cMa=0,cPess=0;
	while (n!=0)// 1ªentrada: automaticamente entrará no ciclo e. 2-Se não satisfazer nenhum dos if Hip1:virá com classae em branco  
	  {
		scanf("%d",&n);// qdo desse um valor negativo sair do ciclo, e estudo é inconclusivo - parâmetros INDICES desconsiderados..
		if (n<35&&n>0) cBoa++;
		if  (n>35 && n<65)++cMa;// não está a considerar! (35<n<65)
		if (n>65) cPess+=1;
	  }//media=0; media=(media+n)/ (cBoa + cMa + cPess);
    printf("QUALIDADE DO AR:%d :)'s,%d :/'s,%d :('s\n",cBoa,cMa,cPess);
  } 
