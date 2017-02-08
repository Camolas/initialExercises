#import <stdio.h> //dif. entre #include

int gVariavelGlobal// recomenda pois ela acedido por todas as funções logo...: + fácil de identificar em programas grandes etc

int main (void){

  void teste(void);

printf("Global = %i\n", gVariavelGlobal)
  teste();
  teste();
  teste();

  return 0;
}
