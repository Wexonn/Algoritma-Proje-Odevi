//int ile sayi degerini tanimladik.
//for d�ng�s� ile 1 den 25 e kadar ve 25 ten 1 e kadar say�lar� yazd�rd�k.
//printf ile say�lar� ve ba�l�klar� ekrana yazd�rd�k.


#include <stdio.h>

int main()
{
 int sayi = 0;
 
 
 
 printf("1'den 25'e ileri sayma\n");
 printf("----------------------\n\n");
 
 for(sayi=1;sayi<=25;sayi++)
 {
  printf("\t%i",sayi);
 }
 printf("\n\n\n");
 printf("25'den 1'e geri sayma\n");
 printf("---------------------\n\n");
 
 for(sayi=25;sayi>=1;sayi--)
 {
  printf("\t%i",sayi);
 }
 
return 0;
}
