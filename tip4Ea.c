#include <math.h>
#include <stdio.h>
#define MIN 0
#define MAX 90
#define INCRE 5
#define PI 3.1415926
#define FCONV PI/180
int
main (void)
{
  int x = MIN;
  while (x <= MAX)
    {
      printf ("%3d %6.5f\n", x, sin (FCONV * x));
      x += INCRE;
    }
  return 0;
}
