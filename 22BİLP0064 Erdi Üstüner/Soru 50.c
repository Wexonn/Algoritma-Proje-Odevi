//int ve char ile kelime1,kelime2 ve sonuc degerlerini tanýmladýk.
//kullanýcýdan iki kelime giriþi isteyip gets ile okuttuk.
//if ve else ile hangisinin uzun oldugunu ekrana yazdýran bir denklem yazdýk ve sonucu ekrana yazdýrdýk.

#include <stdio.h>


 
void main(void)
{
      char kelime1[25];
      char kelime2[25];
      int sonuc;
 
 
      printf("\n Birinci kelime :");
      gets(kelime1);
     
 
      printf("\n Ikinci kelime :");
      gets(kelime2);
      
 
      sonuc = strcmp(kelime1,kelime2);
 
      if( sonuc == 0 )
          printf("\n kelimeler birbirinin aynisi..");
      else
      if( sonuc > 1 )
    {
          printf("\n Birinci kelime daha uzun...");
          
      }
      else
      if( sonuc < 1)
      {
          printf("\n Ikinci kelime daha uzun");
          
      }
 
      return 0;
}
