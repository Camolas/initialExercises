#include <stdio.h>
int main()
{
	int dia, mes, ano;
	printf("Digite uma data: dd mm aaaa!\n");
//Verifica-mos se a data escolhida recebe faz distinção tabs, e espaços e enter
		scanf("%d %d %d",&dia,&mes,&ano);
		switch(mes)
		{
			case 2: if (dia >= 1 && dia <= 28 + ((ano%4==0 && ano%100!=0) || ano%400==0)) // forma simples para lidar com excepções dos ano bissextos..
						printf("Data Válida");
					else
						printf("Data Inválida");
					break;
			case 4:
			case 6:
			case 9:
			case 11:if (dia >= 1 && dia <= 30)
						printf("Data Válida");
					else
						printf("Data Inválida");
					break;
			default:if (mes < 1 || mes > 12)
						printf("Data inválida");
					else
						if (dia >= 1 && dia <= 31)
							printf ("Data Válida");
						else
							printf("Data Inválida"); // Forma bastante concisa e o + eficaz ao meu ver ,.. simplista mas eficiente!!
		}
		puts();// posso por também puts(""); mesma coisa
		return 0;
		
 }
