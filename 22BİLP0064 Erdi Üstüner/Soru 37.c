//int ile sayilar,sayac,max ve min degerlerini tanýmladýk.
//for döngüsü ile gireceðimiz 10 sayýyý sýrayla seçtirmeyi saðladýk ve kullanýcýdan 10 tane sayý giriþi alýp scanf ile okuttuk.
//if ile en büyük ve en küçük sayýyý belirledik.
//son olarak en büyük ve en küçük sayýyý ekrana yazdýrdýk.


#include <stdio.h>

 
void main(void)
{
 int sayilar[10];
 int sayac = 0;
 int max = 0;
 int min = 0;
 
 
 for(sayac=0 ; sayac < 10; sayac++)
 {
  printf("%i. Sayi : ",sayac+1);
  scanf("%i",&sayilar[sayac]);
  
 
  if( sayac == 0 )
   min = sayilar[0];
 
  if( sayilar[sayac] > max )
   max = sayilar[sayac];
 
  if( sayilar[sayac] < min )
   min = sayilar[sayac];
 }
 
 printf("\n En Buyuk Sayi : %i ",max);
 printf("\n En Kucuk Sayi : %i ",min);
 
 return 0;
}
