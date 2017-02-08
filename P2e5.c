//conversâo entre algumas unidades de comprimento,volume e massa
#include <stdio.h>
#define Polegada_cm 2.54
#define Pes_m 0.3048
#define Libras_kg 0.45359
#define Galoes_L 3.7854
int main (void)
  {
	  int opcao;
	  float valor;
	  scanf("%d",&opcao);
	  scanf("%f",&valor);
	  switch (opcao)
	  {
		  case 1: printf("Em centrímetros temos que o valor obtido é: %lf\n",Polegada_cm*valor);
		  case 2: printf("Para metros temos: %f\n",Pes_m* valor); break;
		  case 3: printf("Na conversão para a unidade de massa o valor passou a %f kilos\n",valor*Libras_kg);
		  case 4:printf("No recipiente existem o correspondente a %f litros\n",Galoes_L*valor); 
	  }
  }
