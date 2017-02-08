#include <stdio.h>
int main (void) 
	{
		int nota[5];// como acessar cada bloco
		
		nota[0] = 50;
		nota[1] = 5;
		nota[2] = 4;
		nota[3] = 2;
		nota[4] = 7;
		printf("%d\n", nota[0]);
		
//nota[5] = X, não irá ser atribuído: pois o & não existe
		return 0;
}
