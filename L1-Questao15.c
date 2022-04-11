#include <stdio.h>

int main(){

  float dias;
  float v_liquido, v_bruto;
  float pordia = 50.25;

  printf("Informe a quantidade de dias trabalhados:\n");
  scanf("%f",&dias);

  v_bruto = (pordia * dias);

  if (dias <= 10){
    v_liquido = v_bruto - (v_bruto * 0.1);
  }
  else if(dias > 10 && dias <= 20){
    v_liquido = ((v_bruto + (v_bruto * 0.2)) - (v_bruto *0.1));
  }
  else if(dias > 20){
    v_liquido = ((v_bruto) + (v_bruto * 0.3)) - (v_bruto *0.1);
  }

  printf("Total a ser pago ao vendedor sera R$ %.2f\n",v_liquido);
  
  return 0;
}
