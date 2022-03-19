/*Practica para ver si una palabra es palindromo*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  char palabra[15];

  printf("Ingrese la palabra para ver si es palindromo\n");
  scanf("%s", &palabra);

  int longitud;
  longitud=strlen(palabra);

  int i = 0, f=longitud-1;

  printf("%i\n", longitud);

  while (palabra[i] == palabra[f]) {
    if (i > f) {
      break;
    }
    i++;
    f--;
  }
  if (i>f) {
    printf("Si es palindromo %s\n", palabra);
  }else{
    printf("No es palindromo %s\n", palabra);
  }

  return 0;
}
