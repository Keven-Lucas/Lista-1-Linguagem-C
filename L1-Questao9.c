#include <stdio.h>

int main(){

  int num, ant, suc;
  // num - numero, ant - antecessor, suc - sucessor.

  printf("Informe o numero pretendido:\n");
  scanf("%d", &num);

  ant = num -1;
  suc = num +1;

  printf("O antecessor desse numero sera %d e o seu successor sera %d\n.", ant,suc);
  
  return 0;
}
