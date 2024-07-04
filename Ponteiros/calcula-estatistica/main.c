#include <stdio.h>
#include "estatistica.h"

int main(void) {
    int vetor[] = {15, 15, 15, 12, 11, 10, 9, 8, 7, 6, 12, 5, 4, 3, 2, 1};
    int soma, moda, maior, menor, tamanho = sizeof(vetor)/sizeof(vetor[0]);
    double media;

    soma = calcula_estatistica(vetor, tamanho, &maior, &menor, &media, &moda);

    printf("Soma  : %d\n", soma);
    printf("Maior : %d\n", maior);
    printf("Menor : %d\n", menor);
    printf("Media : %.lf\n", media);
    printf("Moda  : %d\n", moda);

    return 0;
}
