//char ve int ile deðiþkenleri tanýmladýk.
//kullanýcýdan bir cümle giriþi ve cümle içerisinde aranacak bir harf aldýk.
//strlen ile kelimeleri seçtikten sonra for döngüsüyle cümle içerisindeki aradýðýmýz harfleri aradýk.
//ekrana cümle içinde aradýðýmýz harften kaç adet olduðunu belirten bir cümle yazdýrdýk.



#include <stdio.h>
#include <string.h>
 
void main(void)
{
      char kelime[100];
      int uzunluk = 0;
      int n = 0;
      int sayac = 0;
      char aranan;
      char harf;
 
      
 
      printf("\n Uzun bir cumle giriniz : " );
      gets(kelime);
      
 
      printf("\n Cumle icerisinde aranacak harf : ");
      scanf("%c",&aranan);
      
 
      uzunluk = strlen(kelime);
 
      for( n= 0; n < uzunluk ; n++)
      {
          harf = kelime[n];
 
          if(  aranan == harf)
              sayac++;
      }
 
      printf("\n \"%s\" cumlesi icinde %c harfi %i tane geciyor.",kelime,aranan,sayac);
 
      return 0;
}
