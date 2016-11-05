#include <stdio.h>

int main() {

  int a, b, c;

  puts("podaj a");
  scanf("%d", &a);

  puts("podaj b");
  scanf("%d", &b);

  puts("podaj c");
  scanf("%d", &c);


  double wynik1 = a * b - ((double) b / c);
  puts("wynik a)");
  printf("%f\n", wynik1);

  double wynik2 = a * b - (b % c);
  puts("wynik b)");
  printf("%f\n", wynik2);

  double wynik3 = a * b - (c * a) - (b * c);
  puts("wynik c)");
  printf("%f\n", wynik3);



  if ((a>b) && (b>c)) {
    printf("%d, %d, %d\n",a,b,c);
  }
  else if((a>c) && (b>c) && (b>a))  {
    printf("%d, %d, %d\n",b,a,c);
  }
  else if((a>b) && (c>b) && (c>a))  {
    printf("%d, %d, %d\n",c,a,b);
  }
  else if((c>a) && (b>a) && (c>b))  {
    printf("%d, %d, %d\n",c,b,a);
  }
  else if((a>c) && (a>b) && (c>b))  {
    printf("%d, %d, %d\n",a,c,b);
  }
  else if((b>a) && (b>c) && (c>a))  {
    printf("%d, %d, %d\n",b,c,a);
  }

  return 0;

}
