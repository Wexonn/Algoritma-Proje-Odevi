//int ve char ile de�i�kenleri tan�mlad�k.
//kullan�c�dan say� giri�i ald�k.
//for d�ng�s�yle say�n�n asal olup olmad���n� hesaplad�k.
//if ile say� asal ise o say�dan sonraki 10 asal say�y� ekrana yazd�rd�k.
//de�il ise girilen say�n�n asal olmad���n� ekrana yazd�rd�k.


#include <stdio.h>
 
void main(void)
{
 int sayi = 0;
 int n = 0;
 int sayac = 0;
 char asal = 'E';
 
 
 printf("\n Bir sayi giriniz: ");
 scanf("%i",&sayi);
 
 for(n=2;n<sayi;n++)
 {
  if( sayi % n == 0 )
  {
   asal = 'H';
   break;
  }
 }
 
 if( asal == 'E' )
 {
  printf("\n %i asal sayisindan sonraki ",sayi);
  printf("10 asal sayi :\n");
  sayi= sayi + 1;
 
  while(sayac < 10)
  {
   asal = 'E';
 
   for(n=2;n<sayi;n++)
   {
    if( sayi % n == 0 )
    {
     asal = 'H';
     break;
    }
   }
   if(asal == 'E' )
   {
    printf("%i\t",sayi);
    sayac++;
   }
 
   sayi++;
  }
 }
 else
  printf("\n %i asal sayi degildir.",sayi);
 
 return 0;
}
