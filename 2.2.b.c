#include <stdio.h>

int main (void)
{
  int hor, min, seg, hor1, min1, seg1;
  int h,m,s;
  
  printf("Insira o tempo 1 HH:mm:ss ");
  scanf(" %d : %d : %d", &hor, &min, &seg);

  printf("Insira o tempo 2 HH:mm:ss ");
  scanf(" %d : %d : %d", &hor1, &min1, &seg1);

  s = (seg - seg1 + 60) % 60;
  m = ((min - min1 + 60) % 60 + (seg - seg1 - s) / 60 + 60) % 60;
  h = (hor - hor1 + 24) % 24 + (min - min1 - m + (seg - seg1 - s) / 60) / 60;

  printf("A diferença %.2d:%.2d:%.2d\n", h, m ,s);

  return 0;
}
