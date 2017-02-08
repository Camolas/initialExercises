#include <stdio.h>
void link() //http://c-faq.com/aryptr/ptrtoarray.html
{
int a1[3] = {0, 1, 2};
	int a2[2][3] = {{3, 4, 5}, {6, 7, 8}};
	int *ip;		/* pointer to int */
	int (*ap)[3];		/* pointer to array [3] of int */

	ip = a1;
	printf("%d ", *ip);
	ip++;
	printf("%d\n", *ip);
	
	ap = &a1;
	printf("%d\n", **ap);
	ap++;				/* WRONG */
	printf("%d\n", **ap);		/* undefined */
	
	ap = a2;
	printf("%d %d\n", (*ap)[0], (*ap)[1]);
	ap++;		/* steps over entire (sub)array */
	printf("%d %d\n", (*ap)[0], (*ap)[1]);
}
void youtube() // https://www.youtube.com/watch?v=JTttg85xsbo
{
	puts("\n\n Video of youtube with info:");
	int a = 1025;
	int *p;
	p = &a; //ampersand operator
	printf("size of integer is %d bytes or %d bits\n",sizeof(int),sizeof(*p)*8);
}

int main()
{
link();	
youtube()
return 0;
}

