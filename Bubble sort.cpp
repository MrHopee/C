#include <stdio.h>

int main()
{
  int dizi[100], s, x, y, t;

  printf("Eleman sayisini giriniz\n");
  scanf("%d", &s);

  printf("%d Eleman degerlerini giriniz \n", s);

  for (x = 0; x < s; x++)
    scanf("%d", &dizi[x]);

  for (x = 0 ; x < ( s - 1 ); x++)
  {
    for (y = 0 ; y < s - x - 1; y++)
    {
      if (dizi[y] > dizi[y+1])
      {
        t         = dizi[y];
        dizi[y]   = dizi[y+1];
        dizi[y+1] = t;
      }
    }
  }

  printf("Kucukten buyuge siralama:\n");

  for ( x = 0 ; x < s ; x++ )
     printf("%d\n", dizi[x]);

  return 0;
}

