#include <stdio.h>
#include <math.h>

int main(){

  int x,produto;
  int n;

  printf("Digite um valor para x:\n");
  scanf("%d",&x);

  printf("Digite um valor para n:\n");
  scanf("%d",&n);

    produto = (pow(2,n) * x);

  printf("O resultado sera %d\n.",produto);
  
  return 0;
}
