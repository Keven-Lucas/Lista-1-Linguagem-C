#include <stdio.h>

int main(){

  int A,B,C;

  printf("Valor de A: ");
  scanf("%d",&A);

  printf("Valor de B: ");
  scanf("%d",&B);

  C = A;
  A = B;
  B = C; 
  
  printf("\nValor de A = %d, B = %d\n.",A,B);
  
  return 0;
}
