//bu programda matematik iþlemleri için math.h kütüphanesini de kullanýyoruz.
//int ve long ile deðiþkenleri tanýmladýk.
//kullanýcýdan sayý giriþi istedik.
//while döngüsünde mükemmel sayýyý bulmak için denklem kurduk.
//if ve elseyi de ekrana sayýnýn mükemmel sayý olup olmadýðýný yazdýrmak için kullandýk.


#include <stdio.h>
#include <math.h>
 
void main(void)
{
 int sayi = 0;
 int no = 0;
 int rakam = 0;
 long int toplam = 0;
 
 
 printf("\n Bir sayi giriniz : ") ;
 scanf("%i",&sayi);
 
 
 no = sayi;
 
 while( no > 0 )
 {
  rakam = no%10;
  toplam = toplam + pow(rakam,3);
  no = no/10;
 }
 
 if( toplam == sayi )
  printf("\n %i sayisi mukemmel sayidir.",sayi);
 else
  printf("\n %i sayisi mukemmel sayi degildir.",sayi);
 
 return 0;
}
