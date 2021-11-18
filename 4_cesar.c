#include <stdio.h>
#include <stdlib.h>
#include "libprueba.h"

int main(int argc, char *argv[]) {
  // char *palabras[argc-2];
  int key = atoi(argv[1]);
  for (int i = 2; i < argc; i++) {
    printf("%s ", argv[i]);
  }
  printf("\n");
  // el primer argumento es la clave para cifrar
  // la cantidad de letras a desplazar (un entero)
  // para cada arg restante tratado como un string cada uno
  // cifrarlos con la clave e imprimir el mensaje entero cifrado
  // ejemplo: ./a.out 2 ab cd => cd ef
  // cifrar(palabras, key);
  return 0;
}
