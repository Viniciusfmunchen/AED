//
// Created by Vinicius Fontana Munchen on 04/07/24.
//
#include <stdio.h>
#include <stdlib.h>
#include "estatistica.h"

static int soma_vetor(int v[], int tam) {
    if(tam == 0) {
        return 0;
    }
    return v[tam - 1] + soma_vetor(v, tam - 1);
}

static double media_vetor(int soma, int tam) {
    return soma/tam;
}

static int maior_elemento(int v[], int tam) {
    int m = v[0];
    for(int i = 1; i < tam; i++) {
        if(v[i] > m)
            m = v[i];
    }

    return m;
}

static int menor_elemento(int v[], int tam) {
    int m = v[0];
    for(int i = 1; i < tam; i++) {
        if(v[i] < m) {
            m = v[i];
        }
    }

    return m;
}

static int ocorrencia(int n, int v[], int tam) {
    int contador = 0;
    for(int i = 0; i < tam; i++) {
        if(v[i] == n) {
            contador += 1;
        }
    }

    return contador;
}

static int moda_vetor(int v[], int tam, int maior)    {
    maior += 1;
    int *aux = malloc(maior * sizeof(int)), moda = v[0];
    for (int i = 0; i < tam; i++) {
        aux[v[i]] += 1;
    }

    for(int i = 0; i < maior; i++) {
        if(aux[i] > aux[moda]) {
            moda = i;
        }
    }

    if(ocorrencia(aux[moda], aux, maior) > 1) {
        return 0;
    }

    return moda;
}

int calcula_estatistica(int v[], int tam, int *maior, int *menor, double *media, int *moda) {
    int soma = soma_vetor(v, tam);
    *maior = maior_elemento(v, tam);
    *menor = menor_elemento(v, tam);
    *media = media_vetor(soma, tam);
    *moda = moda_vetor(v, tam, *maior);

    return soma;
}