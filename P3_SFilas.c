/*Practica para ver la suma de las filas y mostrar cuales es la fila
con el total mas grande*/
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int sum = 0;
  int i,j, cont=1;
  int matriz[3][3];
  int mt[3];
  int tt[2];

  for(i=0; i<3;i++){
    for(j=0;j<3;j++){
      printf("Ingrese el numero %i\n", cont);
      scanf("%i", &matriz[i][j]);
      cont++;
    }
  }

  tt[2]=0;
  j = 0;
  for(int k=0; k<3;k++){
    for(i=0;i<3;i++){
      sum = sum + matriz[j][i];
    }
    if(sum>tt[2]){
      tt[1] = j;
      tt[2] = sum;
    }
    mt[j+1]= sum;
    j++;
    sum = 0;
  }

  for(i=1;i<=3;i++){
    printf("El Total de la fila %i es %i\n", i,mt[i]);
  }

  printf("El Fila %i Tiene el total mas grande con %i\n", tt[1], tt[2]);
  return 0;
}
