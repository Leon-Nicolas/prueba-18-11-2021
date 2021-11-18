// implementar las funciones de libprueba.h aca
#include <stdio.h>
#include <stdlib.h>


void saludar (char *name){
  printf("Hola, %s\n", name);
}

void suma_vectorial(int u[], int v[], int result[], int n){
  for (int i = 0; i < n; i++) {
    result[i] = u[i] + v[i];
  }
}

void print_array(int a[], int size){
  for (size_t i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
}

int potencia_de_dos(int n){
  int potencia = 1;
  for (int i = 0; i < n; i++) {
    potencia = potencia * 2;
  }
  return potencia;
}







void cifrar(char word[], int key){
  for (int i = 2; i < argc; i++) {
    printf("%s ", argv[i]);
  }
  printf("\n");
}
