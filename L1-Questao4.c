#include <stdio.h>

int main(){

  int X, triplo;
  int quadrado,meio;

  printf("Digite um valor para X:\n");
  scanf("%d",&X);

  triplo = 3 * X;
  quadrado = X * X;
  meio = X/2;

  printf("O triplo = %d, o quadrado = %d, o meio = %d\n.",triplo,quadrado,meio);
  
  return 0;
}
