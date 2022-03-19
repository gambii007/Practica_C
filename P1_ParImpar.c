/*Practica para, verificar si un numero es par o impar*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
  int sum = 0, i;
  int m[5];

  for(i=0;i<5;i++){
    printf("Dato #%i: ", i+1);
    scanf("%i", &m[i]);
  }

  for(i=0;i<5;i++){
    sum = sum + m[i];
  }

  if(sum%2==0){
    printf("Es par\n");
  }else{
    printf("Es impar\n");
  }

  printf("El total es %i",sum);
  return 0;
}
