//
// Created by Vinicius Fontana Munchen on 09/07/24.
//

int somatorio(int n) {
    if(n < 0) {
        return 0;
    }

    return n + somatorio(n - 1);
}