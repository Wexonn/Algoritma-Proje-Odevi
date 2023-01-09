//int ve char ile deðiþkenleri tanýmladýk.
//kullanýcýdan sayý giriþi aldýk.
//for döngüsüyle sayýnýn asal olup olmadýðýný hesapladýk.
//if ile sayý asal ise o sayýdan sonraki 10 asal sayýyý ekrana yazdýrdýk.
//deðil ise girilen sayýnýn asal olmadýðýný ekrana yazdýrdýk.


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
