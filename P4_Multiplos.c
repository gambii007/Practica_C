/*Practica para multiplos de 3, 5 y multplos de 3 y 5*/
#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i;

  for(i=1;i<=100;i++){
    if(i%3==0 && i%5==0){
      printf("FizzBuzz ");
    }else if(i%3==0){
      printf("Fizz ");
    }else if(i%5==0){
      printf("Buzz ");
    } else{
      printf("%i ", i);
    }
  }


  return 0;
}
