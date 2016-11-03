#include <stdio.h>

int main (void)
{
  int hor, min, hor1, min1;
  int h,m;
  float preco = 0.0;
  
  printf("Insira o tempo de entrada HH:mm ");
  scanf(" %d : %d", &hor, &min);

  printf("Insira o tempo saída HH:mm ");
  scanf(" %d : %d", &hor1, &min1);

  //com base em 2.2.b.c
  m = (min1 - min + 60) % 60;
  h = ((hor1 - hor + 24) % 24 + (min1 - min - m) / 60 + 60) % 60;
  
  h += (m + 59)/60;
    
  for (; h > 3 ; h--) preco += 1.0;
  if (h == 3)
    {
      preco += 1.80;
      h = 0;
    }
  else if (h == 2)
    {
      preco = 1.15;
      h = 0;
    }
  else if (h == 1)
    {
      preco = 0.5;
      h = 0;
    }
  
  printf("A pagar do estacionamento: %2.2f€\n", preco);
  return 0;
}
