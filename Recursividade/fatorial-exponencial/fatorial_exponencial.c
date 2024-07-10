#include <math.h>
//
// Created by Vinicius Fontana Munchen on 10/07/24.
//
int fatorial_exponencial(int n) {
    if(n == 1) {
        return n;
    }

    return pow(n, fatorial_exponencial(n - 1));
}