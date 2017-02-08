//********Damas Livro***************
#include <stdio.h>
//#define TABUADA 5 http://stackoverflow.com/questions/7718032/error-lvalue-required-as-left-operand-of-assignment  down vote accepted
	

//You can't assign to a define! After the preprocessor is done, to the compiler the code looks like this:

// 50 = 50 * 2 + total; 50 = ... in C. Can't do it.

/*
int main (void)
	{
		int i;
		
		for (int j=5;j;j=j-1)
		// to compile doing this declaration inside on (flux control) for 
		/*The other answers give you a work around to deal with GCC's default mode. If you'd like to use C99, (which I do recommend in general) then you have to add that compiler flag:

gcc -std=c99 foo.c -o foo*/
/*		
		{
			i=0;//i;
			
			while(i<=10)
				{
				printf("%d * %3d = %3.5d\n",j,i,j*i);
				i=1+i;
				}
			puts("");
		/*for(i=0;i<11;i+1)
		
		{
			printf("%d * %d = %d\n",TABUADA,i,TABUADA*i);
		}*/
/*		}
		return 0;
	} 
	
/*	
*/
main()
 { int n,num; num=1;while (num <= 10)
 { n=1; while(n<=10)
 { printf("%2d * %2d\n",num,n,num*n); n = n+1;
 } /*Passa a proxima tabuada*/ num = num +1; putchar('\n');
 }
 } 

