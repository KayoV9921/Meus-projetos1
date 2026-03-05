#include <stdio.h>

int main(void) {
  float a, b, c, media;
  printf("digite a primeira nota:\n");
  scanf("%f", &a);
  printf("digite a segunda nota:\n");
  scanf("%f", &b);
  printf("digite a terceira nota\n");
  scanf("%f", &c);
  media =(a + b + c)/3;
  printf (" sua media é %f\n", media);
  if (media >= 10 ){
  printf ("aprovado");
  }
  else {
      printf ("reprovado");
  }
  
  return 0;
}