#include <stdio.h>

int main (void)
{
  int seg, min, hor;
  
  printf("Insira um tempo em segundos: ");
  scanf("%d", &seg);
  
  min = seg / 60;
  hor = min / 60;
  min %= 60;
  seg %= 60;
  
  printf("%d:%d:%d\n", hor, min, seg);

  printf("Insira um tempo em HH:SS:MM ");
  scanf(" %d : %d : %d", &hor, &min, &seg);
  
  seg += min * 60;
  seg += hor * 3600;
  
  printf("Em segundos: %d\n", seg);

  return 0;
}
