#include <stdio.h>

int main(){

  float hora_aula, val_hora, hora_trab, des_inss;
  float sal_bruto, sal_liquido;
  
  printf("Informe o valor da hora aula:\n");
  scanf("%f",&hora_aula);

  printf("Informe o numero de horas trabalhadas:\n");
  scanf("%f",&hora_trab);

  printf("Informe o percentual de descontao do INSS:\n");
  scanf("%f",&des_inss);

  sal_bruto = hora_aula * hora_trab;
  sal_liquido = sal_bruto - des_inss;

  printf("O salario bruto = %.2f e o salario liquido = %.2f\n",sal_bruto,sal_liquido);

  return 0;
}
