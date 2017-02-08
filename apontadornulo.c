int main(void)
{
	//int x= 91;
    char *p1 = (char *) malloc(sizeof(char)); // aloca memória e inicializa o ponteiro
    printf("p1 aponta para: %p\n",  p1);       // aponta para algum lugar da memória heap
    printf("Valor de  *p1: %c\n", *p1);      // valor (indefinido) de algum lugar na memória heap
 
    char *p2;                                // ponteiro selvagem
    printf("Endereco de p2: %p\n",  p2);      // valor indefinido, pode não ser um endereço válido
    //char *p3 = &x;
    //printf("Endereco de p3: %p\n", p3);
 // mas se fizzesse: 
    // se você for sortudo, isso irá causar uma exceção de endereçamento
    printf("Valor de *p2: %c\n", *p2);      // valor aleatório em endereço aleatório
	printf("Valor de *p3: %c\n", *p3);
    
    free(p1); //A função free libera o espaço de memória usado pelo ponteiro

    return 0;
}
