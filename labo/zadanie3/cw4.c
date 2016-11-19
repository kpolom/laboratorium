#include <stdio.h>

int main () {

  int x=0;
  int suma=1;
  int silnia=1;

  printf("Podaj liczbę: ");
  scanf("%d",&x);

  while (suma<=x) {
  silnia = silnia * suma;
  suma = suma + 1;
  }

  printf("Silnia tej liczby to: %d\n", silnia);
  return 0;
}
