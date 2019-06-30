#include <stdio.h>
main() {
char ch1,ch2;
printf("\tIntroduza um carater\n");
scanf("%c",&ch1);
printf("Introduza um 2ºcarater\n");
fflush(stdin);
scanf(" %c",&ch2);
printf("Os carateres associados as variáveis são: %c e %c\n",ch1,ch2);
}
