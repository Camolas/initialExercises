#import <stdio.h> //dif. entre #include

int gVariavelGlobal = 2
;// recomenda pois ela acedido por todas as funções logo...: + fácil de identificar em programas grandes etc

int main (void){

  void teste(void); // só pode ser usada no main.. normalmente é a declaração é  pública assim fica protected???

printf("Global = %i\n", gVariavelGlobal);
  teste();
  teste();

  return 0;
}

void teste(void){
  int varLocalAuto = 2;
  varLocalAuto *= 2;

  static int variavelLocalEstatica = 2;
  variavelLocalEstatica *= 2;

  gVariavelGlobal *= 2;

  printf("Local Automatica = %i\n", varLocalAuto );
  printf("Local Estática = %i\n", variavelLocalEstatica );
  printf("Global = %i\n", gVariavelGlobal);  // a local  age como se fosse estatica
}
