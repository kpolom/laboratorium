#include <stdio.h>

int main () {

  int x=0;
  int y=0;

  printf("Podaj liczbę:");
  scanf("%d",&x);
  int suma = x * x;

  printf("Czy chcesz kontynuować? (1-tak, 0-nie)");
  scanf("%d", &x);
   while (x > 0) {
   printf("Podaj kolejną liczbę:");
     scanf("%d", &y);
     printf("Czy chcesz kontynuować? (1-tak, 0-nie)");
     scanf("%d", &x);
     suma = suma + (y * y);
   }
  printf("suma kwadratów: %d\n", suma);
return 0;
}
