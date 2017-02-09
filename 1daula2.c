#include <stdio.h>
main() {
int n1, n2, sol, res;
printf("Introduz o primeiro inteiro\n");
scanf("%d", &n1);
printf("Introduz o segundo inteiro\n");
scanf("%d",&n2);
sol=n1+n2;
printf("Introduz a tua resposta\n");
scanf("%d",&res);
if (sol==res) printf("Parabens!!!\n");
else printf("Enganaste-te! Tenta outra vez!\n");
}
