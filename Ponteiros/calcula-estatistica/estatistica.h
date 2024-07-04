//
// Created by Vinicius Fontana Munchen on 04/07/24.
//

#ifndef ESTATISTICA_H
#define ESTATISTICA_H
  static int maior_elemento(int v[], int tam);
  static int menor_elemento(int v[], int tam);
  static double media_vetor(int soma, int tam);
  static int soma_vetor(int v[], int tam);
  static int ocorrencia(int n, int v[], int tam);
  static int moda_vetor(int v[], int tam, int maior);
  int calcula_estatistica(int v[], int tam, int *maior, int *menor, double *media, int *moda);
#endif //ESTATISTICA_H
