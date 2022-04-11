#include <stdio.h>

int main() {

  float consumo, valortotal;
  float gorjeta;

    printf("Informe o valor de sua conta R$:");
    scanf("%f", &consumo);

    gorjeta = (10 * consumo)/100;
    valortotal = consumo + gorjeta;

    printf("\nO valor total da conta sera de R$ %.2f\n",       valortotal);
  
  return 0;
}
