#include <stdio.h>

int main(){

  int xa,xb,xc;

  xa = 7 + ((3*6)/2-1);
    // Passo 1: (3*6), Passo 2: (3*6)/2-1, Passo 3: (7 + (3*6)/2-1)

  xb = ((2%2) + ((2*2-2)/2));
    // Passo 1: (2*2), Passo 2: (2*2)-2, Passo 3: ((2*2)-2)/2, Passo 4: (2%2), Passo 5: (2%2 + ((2*2)-2)/2)

  xc = (3 * 9 * (3 + (9*3/(3) ) ) );
    // Passo 1: (9*3), Passo 2: (9*3)/3, Passo 3: (9*3)/3 + 3, Passo 4: 9 * ((9*3)/3 + 3), Passo 5: 3 * (9 * (9*3/3 + 3))

  printf("Os valores de X serao:\n xa =%d, xb =%d, xc =%d\n.",xa,xb,xc);
  
  return 0;
}
