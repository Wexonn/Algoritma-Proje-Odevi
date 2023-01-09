//int ve char ile baslangic,bitis,sayi,n ve asal degerlerini tanýmladýk.
//kullanýcýdan baþlangýç ve bitiþ sayýlarýný aldýk ve scanf ile okuttuk.
//sonrasýnda for döngüsü ve if ile asal olup olmayanlarý birbirinden ayýrdýk ve ekrana yazdýrdýk.



#include <stdio.h>
 
int main()
{
 int baslangic = 0;
 int bitis = 0;
 int sayi = 0;
 int n = 0;
 char asal = 'E';
 
 
 printf("\n baslangic sayisini giriniz : ");
 scanf("%i",&baslangic);
 
 
 printf("\n bitis sayisini giriniz : ");
 scanf("%i",&bitis);
 
 
 printf("\n\n %i ve %i arasindaki asal sayilar : ",baslangic,bitis);
 printf("\n -----------------------------------\n");
 
 for( sayi = baslangic ; sayi <= bitis ; sayi++ )
 {
  asal = 'E';
  for( n = 2 ; n < sayi ; n++ )
  {
   if( sayi % n == 0 )
    asal = 'H' ;
  }
  if( asal == 'E' )
   printf("\t%i",sayi);
 }
 
 return 0;
}
