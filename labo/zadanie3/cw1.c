#include <stdio.h>

int main () {

  int x=0;
  int y=0;

  printf("Podaj pierwszą liczbę (mniejszą, całkowitą):");
  scanf("%d",&x);
  printf("Podaj drugą liczbę (większa, calkowitą):");
  scanf("%d",&y);


  printf("Liczby całkowite pomiędzy a i b \n");

while (x<=y) {
   printf("%d, ", x);
x=x+1;
}
printf("\n");

  return 0;
}
