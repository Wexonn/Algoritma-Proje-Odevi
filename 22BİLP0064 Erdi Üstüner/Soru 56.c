//char ve int ile de�erleri tan�mlad�k.
//kullan�c�dan metin giri�i ald�k.
//for d�ng�s� ve if ile harfleri s�ralamaya koyup printf ile ekrana yazd�rd�k.


#include <stdio.h>
#include <string.h>
 
void main(void)
{
      char metin[100];
      char temp;
 
      int uzunluk = 0;
      int m = 0,n = 0;
 
     
 
      printf("\n Bir metin giriniz : " );
      gets(metin);
     
 
      uzunluk = strlen(metin);
 
      for( m = 0 ; m < uzunluk - 1; m++ )
      {
            for( n = m+1 ; n < uzunluk; n++ )
          {
              if( metin[m] > metin[n] )
              {
                  temp = metin[m];
                  metin[m] = metin[n];
                  metin[n] = temp;
              }
          }
      }
 
      printf("\n Harflerinin siralamasi %s",metin);
      return 0;
}
