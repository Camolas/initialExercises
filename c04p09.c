#include <stdio.h>

int main(void)
{
    int c;

    while((c = getchar()) != EOF )
        putchar(toupper(c));

    fflush(stdout);
    return 0;
}
