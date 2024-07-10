#include <stdio.h>
#include "superfatorial.h"

int main(void) {
    int n = 0;

    printf("Insira um inteiro para calcular o superfatorial: \n");
    scanf("%d", &n);

    printf("Fatorial: %d\n", fatorial(5));
    printf("Superfatorial: %d\n", superfatorial(5));
    return 0;
}
