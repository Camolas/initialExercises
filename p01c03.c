#include <stdio.h>
main ()
{
	int n, m;
	printf("inicialize as variáveis em jogo\n"); scanf("%d%d",&n, &m);
	printf("\nos valores %d(m) e %d(n) são iguais %d\v:]",m,n,m==n);
	printf("\n%d-m é verdade que é maior que %d-n:%d\n",m, n,m>n);
	printf("%d >= %d:%d\n",m,n,m>=n);
	printf("%d é < %d:%d\n"m,n,m<n);
	printf("%d é <= %d:%d\n"m,n,m<=n);
	printf("O resultado de %d é != %d:%d\n"m,n,m!=n);
}
