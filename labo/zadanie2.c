#include <stdio.h>

int main() {
  int suma = 0;
  double srednia;
  int ilosc = 0;
  int max = -29999;
  int min = 29999;
  int tab[7];


  for (int i = 0; i < 7; i=i+1) {
    scanf("%d", &tab[i]);
    if(min >= tab[i]) {
      min = tab[i];
    }
    if(max <= tab[i]) {
      max = tab[i];
    }
    if(100 < tab[i]) {
       ilosc = ilosc +1;
    }

    suma = suma + tab[i];

}

    srednia = (double)suma / 7;

    puts("a)liczba najmniejsza");
    printf("%d\n",min);

    puts("b)liczba największa");
    printf("%d\n",max);

    puts("c)średnia arytmetyczna");
    printf("%f\n",srednia);

    puts("d)ilośc liczb wiekszych od 100");
    printf("%d\n",ilosc);



  return 0;
}
