#include <stdio.h>
main () 
{	int num,num2;
	float res;
	char symbol;
	printf(" escreve a expressão binária em causa\v"); scanf("%d%c%d",&num,&symbol,&num2);/*esta forma
	printf(" multiplicação de %d por %d=%d", num,num2,num*num2);
	printf(" divisão  de %d por %d=%d", num,num2,num*num2);
	printf(" multiplicação de %d por %d=%d", num,num2,num*num2);

switch(num symbol num2)
	{ case symbol='+'
	*/
switch (symbol)
{
	case '+':printf("\ha soma\t da-se da seguinte forma:num + num2=%d\n",num+num2); break;
	case '-': printf("num %c num2 =%d\n",symbol,num - num2); break;
	case 'x':
	case 'X':
	case '*': printf("%d*%d=%d\n",num2,num,num2*num);break;
	case '\\':
	case ':':
	case '/': printf("%d/%d=%d\n",num,num2,num/num2);break;
/*default : printf("erro\v");printf ("volte a tentar\v");printf("\nmais uma vez!!\v");*/break;
}
  switch(symbol)
    {
        case '+':res = num + num2; break;
		case '-':res=num - num2; break;
		case 'x':
		case 'X':
		case '*':res=num2*num;break;
		case '\\':
		case ':':
		case '/': res=num/num2;break;
	}	
	printf("o resultado:%f",res);
	
	
	
}
