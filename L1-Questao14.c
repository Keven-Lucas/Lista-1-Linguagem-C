#include <stdio.h>

int main(){

  float F,C;
  // F - Fahrenheit; // C - Celsius;

  puts("Informe a temperatura em Celsius:");
  scanf("%f", &C);  

  F = (9 * C+160)/5;

  printf("A temperatura em Fahrenheit sera:\n %.1f ",F);
  
  return 0;
}
