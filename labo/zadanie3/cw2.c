#include <stdio.h>

int main () {

  int x=0;
  int y=0;
  int suma=0;

  printf("Podaj pierwszą liczbę (mniejszą, całkowita):");
  scanf("%d",&x);
  printf("Podaj drugą liczbę (większa, całkowita):");
  scanf("%d",&y);


  while (x<=y) {
    suma = suma + x;
  x=x+1;
  }
  printf("Suma liczb pomiędzy: %d\n", suma);

return 0;
}
