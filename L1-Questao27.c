#include <stdio.h>
#include <math.h>

int main(){

  float a, b, c;
  float soma, produto, expoente;
  float media;

  printf("Informe tres numeros para operacao:\n");
  scanf("%f %f %f", &a,&b,&c);

  soma = a+b+c;
  media = soma /3;

  printf("Media aritmetica: %.2f\n",media);

  expoente = 1.0/3;
  produto = a*b*c;
  media = pow(produto, expoente);

  printf("Media geometrica: %.2f\n",media);
  
  return 0;
}
