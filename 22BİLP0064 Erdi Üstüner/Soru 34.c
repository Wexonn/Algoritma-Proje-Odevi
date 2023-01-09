//bu programda matematik i�lemleri i�in math.h k�t�phanesini de kullan�yoruz.
//int ve long ile de�i�kenleri tan�mlad�k.
//kullan�c�dan say� giri�i istedik.
//while d�ng�s�nde m�kemmel say�y� bulmak i�in denklem kurduk.
//if ve elseyi de ekrana say�n�n m�kemmel say� olup olmad���n� yazd�rmak i�in kulland�k.


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
