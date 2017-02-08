#include<stdio.h>
int main(void) 
  {
	int s, k = 999;
	s = 0;
	while (k>=1) {
		s = s + k;
		k = k - 2;
  }
	printf("soma e %d\n",s);//
	return 0;
}
/*Numa Progressão Aritmética finita,
a soma de dois termos eqüidistantes dos extremos é igual à soma dos termos extremos,
então fazemos: podemos aplicar a seguinte fórmula Sn=((a1+an)*n)/2*/
