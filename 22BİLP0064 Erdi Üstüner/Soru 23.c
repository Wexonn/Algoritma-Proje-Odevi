//int ile sayi degerini tanimladik.
//for döngüsü ile 1 den 25 e kadar ve 25 ten 1 e kadar sayýlarý yazdýrdýk.
//printf ile sayýlarý ve baþlýklarý ekrana yazdýrdýk.


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
