//
// Created by Vinicius Fontana Munchen on 10/07/24.
//
#include <stdio.h>

int fatorial(int n) {
    if(n == 1) {
        return 1;
    }

    return n * fatorial(n - 1);
}

int superfatorial(int n) {
    if(n == 1) {
        return 1;
    }

    return fatorial(n) * superfatorial(n - 1);
}