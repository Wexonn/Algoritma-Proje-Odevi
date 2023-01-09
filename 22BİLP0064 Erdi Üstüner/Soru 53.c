//char ve int ile deðiþkenleri tanýmladýk.
//kullanýcýdan bir cümle giriþi istedik.
//strlen ile kelimeyi seçip, for döngüsünde kurduðumuz denklem ile sesli harfleri bulduk.
//cümlede kaç sesli harf olduðunu söyleyen sonuç cümlesini ekrana yazdýrdýk.


#include <stdio.h>
#include <string.h>
 
void main(void)
{
      char kelime[100];
      int uzunluk = 0;
      int n = 0;
      int sayac = 0;
      char harf;
 
      
 
      printf("\n Bir cumle giriniz (Turkce karakter kullanmayiniz):\n" );
      gets(kelime);
    
 
      uzunluk = strlen(kelime);
 
      for( n= 0; n < uzunluk ; n++)
      {
          harf = kelime[n];
 
          if( harf >= 'a' && harf <= 'z' )
              harf = harf - 32;
 
          if( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O' || harf == 'U')
              sayac++;
      }
 
      printf("\n %s cumlesinde %i sesli harf var.",kelime,sayac);
 
      return 0;
}
