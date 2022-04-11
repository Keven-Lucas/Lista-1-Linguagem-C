#include <stdio.h>

int main(){

  int hora,min;
  int seg,totalseg;
  
  printf("Informe a quantidade de horas:\n");
  scanf("%d", &hora);
  printf("Informe a quantidade de minutos:\n");
  scanf("%d", &min);
  printf("Informe a quantidede de segundos:\n");
  scanf("%d", &seg);
  
  totalseg = (((hora * 3600) + min * 60) + seg);
  // 1 Hora - 3600 segundos
  // 1 Minuto - 60 segundos

  printf("O total de segundos sera %d segundos.",totalseg);
  return 0;
}
