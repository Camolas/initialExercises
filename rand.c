#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
srand ( time(NULL) );

printf ("Um numero entre 0 e RAND_MAX (%d): %d\n", RAND_MAX, rand());
printf ("Um numero entre 0 e 99: %d\n", rand()%100);
printf ("Um numero entre 20 e 29: %d\n", rand()%10+20);

return 0;
}
