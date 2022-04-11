#include <stdio.h>
#include <math.h>

int main(){

  int Xf, Xi, Yf, Yi;
  float distancia;

  printf("Informe valores para as coordenadas X:\n");
  scanf("%i %i", &Xf, &Xi);
  printf("Informe valores para as coordenadas Y:\n");
  scanf("%i %i", &Yf, &Yi);

  distancia = sqrt (pow(Xf - Xi,2) + pow (Yf - Yi,2)); 

  printf("A distancia entre os dois pontos sera %.2f\n",distancia);
  
  return 0;
}
