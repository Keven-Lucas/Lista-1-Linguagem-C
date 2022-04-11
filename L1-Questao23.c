#include <stdio.h>

int main(){

  int digitos, inverte;

  printf("Informe um numero inteiro:\n");
  scanf("%i",&digitos);

  if (digitos >= 0){
    do{
      inverte = digitos % 10;
      printf("%i",inverte);
      digitos /= 10;
    }while(digitos != 0);
    printf("\n");  
  }
  else if (digitos < 1){
    digitos = digitos * -1;
    printf("-");
      do{
        inverte = digitos % 10;
        printf("%i",inverte);
        digitos /= 10;
      }while(digitos != 0);
    printf("\n");
  }

  return 0;
}
