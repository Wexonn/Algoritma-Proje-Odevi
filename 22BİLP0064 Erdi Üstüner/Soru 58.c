//char ve int ile deðerler tanýmladýk.
//kullanýcýdan bir metin giriþi aldýk.
//if ve while yardýmýyla baþharfleri büyük harf yapabileceðimiz bir denklem yazdýk ve sonucu ekrana yazdýrdýk.


#include <stdio.h>
#include <string.h>
 
void main(void)
{
      char metin[100];
      char harf;
 
      int uzunluk = 0;
      int n = 0;
 
      
 
      printf("\n Bir metin giriniz : ");
      gets(metin);
      
 
      if( metin[0] >= 'a' && metin[0] <= 'z' )
          metin[0] = metin[0] - 32;
 
 
      while( metin[n] != '\0' )
      {
          harf = metin[n];
 
          if( harf == ' '  )
          {
                n++;
                harf = metin[n];
 
              if( harf >= 'a' && harf <= 'z' )
              {
                    harf = harf - 32;
                    metin[n] = harf;
              }
          }
            n++;
      }
 
      printf("\n Yeni Metin :  %s",metin);
 
      return 0;
}
