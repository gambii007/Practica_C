/*Practica contadores para recorridos segun cadenas*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  char path[1000000];
  int n=0;
  while (n<2 || n>1000000) {
    printf("Ingrese un camino entre 2 y 1,000,000:\n");
    scanf("%s", &path);
    n = strlen(path);
  }

  int nivel = 0, cont = 0,  prueba= 0;
  for (int i = 0; i < n; i++) {
     if(path[i] == 'D') {
       nivel--;
       prueba=1;
     }else if(path[i] == 'U') {
       nivel++;
       if(nivel==0 && prueba==1){
         prueba==0;
         cont++;
       }
     }
  }
  printf("Valles Recorridos: %i", cont);
  return 0;
}
