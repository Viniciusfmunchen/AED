//
// Created by Vinicius Fontana Munchen on 09/07/24.
//
#include <stdio.h>

int decrescente(int n) {
    if(n < 0) {
        return 0;
    }

    printf("%d ", n);
    return decrescente(n - 1);
}

int crescente(int n, int inicio) {
    if(inicio > n) {
        return n;
    }

    printf("%d ", inicio);
    return crescente(n, inicio + 1);
}