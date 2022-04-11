#include <stdio.h>

int main(){

  int num, num_quadrado;

  printf("Informe o numero desejado:\n");
  scanf("%d", &num);

  num_quadrado = num * num;

  printf("%d ao quadrado resulta em %d\n",num,num_quadrado);
  
  return 0;
}
