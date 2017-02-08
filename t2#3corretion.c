#include <stdio.h>
#define DIAS 30
main() {
int indice, dias = 1, boa = 0, ma = 0, pessima = 0,
soma = 0;
double media;
printf("Indices da qualidade do ar:\n");
while (dias <= DIAS) {printf("\nQualidade || Número de dias\n");
scanf("%d",&indice);printf("---------------------------\n\n");

if (indice < 35) boa = boa + 1;printf("Boa %4d\n",boa);
else if( indice >= 35 && indice <= 60) ma = ma +
1;
printf("Ma %4d\n",ma);
else pessima = pessima + 1;
soma = soma + indice;
dias = dias + 1;
}
media = (float) soma / DIAS;
}


printf(" Pessima
 %4d\n\n",pessima);
printf("Em média a qualidade foi ");
if (media < 35 ) printf("Boa\n");
else if( media >= 35 && media <= 60)
 printf("Má\n");
else printf("Péssima\n");
}
