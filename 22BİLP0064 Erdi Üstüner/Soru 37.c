//int ile sayilar,sayac,max ve min degerlerini tan�mlad�k.
//for d�ng�s� ile girece�imiz 10 say�y� s�rayla se�tirmeyi sa�lad�k ve kullan�c�dan 10 tane say� giri�i al�p scanf ile okuttuk.
//if ile en b�y�k ve en k���k say�y� belirledik.
//son olarak en b�y�k ve en k���k say�y� ekrana yazd�rd�k.


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
