#include <stdio.h>

int main(){

  float altura, pesoideal;
  char sexo;

  printf("Informe sua altura em metros Ex:0.00 :\n");
  scanf("%f", &altura);
  printf("Informe o seu sexo [M] ou [F]:\n");
  scanf("%c ", &sexo);

  sexo = getchar();
  
  switch(sexo)
  {
    case 'M':
      pesoideal = (72.7 * altura) - 58;
    break;
    case 'F':
      pesoideal = (62.1 * altura) - 44.7;
    break;
    default:
      printf("Voce so deve utilizar os indicadores acima!\n");
    break;
  }

  printf("O seu peso ideal deve ser Kg %.2f\n.",pesoideal);
  
  return 0;
}
