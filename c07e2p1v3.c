/* o nome stralphacount é mais apropriado que strcount */
int stralphacount(char *str) {
    int i, n = 0;
    for (i = 0; str[i] != '\0'; ++i)
        if (isalpha(str[i]))
            n += 1;
    return n;
}

int main(void) {
    char *frase = "Ontem fui comprar um electrodoméstico";
    printf("A frase \"%s\" tem %d caracteres alfabéticos\n", frase, stralphacount(frase));

    return 0;
}
