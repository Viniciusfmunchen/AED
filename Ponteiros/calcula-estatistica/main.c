#include <stdio.h>
#include <stdlib.h>

int sum(int v[], int tam) {
    if(tam == 0) {
        return 0;
    }
    return v[tam - 1] + sum(v, tam - 1);
}

double media(int soma, int tam) {
    return soma/tam;
}

int bigger(int v[], int tam) {
    int m = v[0];
    for(int i = 1; i < tam; i++) {
        if(v[i] > m)
            m = v[i];
    }

    return m;
}

void mostrar_vetor(int v[], int tam) {
    for(int i = 0; i < tam; i++) {
        printf("--[%d]-%d--", i,v[i]);
    }
    printf("\n");
}

int moda(int v[], int tam, int maior)    {
    maior += 1;
    int *aux = malloc(maior * sizeof(int)), moda = v[0];
    for (int i = 0; i < tam; i++) {
        aux[v[i]] += 1;
        if(aux[i] > aux[moda]) {
            moda = i;
        }
    }

    return moda;
}



int main(void) {
    int vetor[] = {1, 2, 3, 4, 4};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    int soma = sum(vetor, tamanho);
    int maior = bigger(vetor, tamanho);
    printf("NUMEROS: %d\n", tamanho);
    printf("Maior:   %d\n", bigger(vetor, tamanho));
    printf("Soma:    %d\n", soma);
    printf("Media:   %.2lf\n", media(soma, tamanho));
    printf("Moda:    %d\n", moda(vetor, tamanho, maior));

    return 0;
}
