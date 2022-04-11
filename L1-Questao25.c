#include <stdio.h>

int main(){

  int hora,min;
  int seg,total_seg, resto;
  
  printf("Informe a quantidade de segundos:\n");
  scanf("%d",&total_seg);
  
  hora = total_seg / 3600;
  resto = total_seg % 3600;
  
  min = resto / 60;
  seg = resto % 60;
  // 1 Hora - 3600 segundos
  // 1 Minuto - 60 segundos

  printf("O tempo sera %dh : %dm : %ds.\n",hora,min,seg);
  
  return 0;
}
