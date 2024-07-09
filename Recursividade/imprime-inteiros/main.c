#include <stdio.h>
#include "imprime_inteiros.h"

int main(void) {
    int n;
    printf("Digite um inteiro: \n");
    scanf("%d", &n);

    crescente(n, 0);
    printf("\n");
    decrescente(n);
    return 0;
}
