//char ve int ile deðerleri tanýmladýk.
//char parametresinde 250 karakteri belirttiðimiz için maksimum 250 karakter yazýlabilecek þekilde kullanýcýdan bir metin istedik.
//while,if ve else if ile türkçe harfler de dahil olmak üzere büyük yazabilmemiz için bir denklem yazdýk ve sonucu ekrana yazdýrdýk.


#include <stdio.h>
#include <string.h>
 
void main(void)
{
      char metin[250];
      int n = 0;
 
      printf("\n Bir metin giriniz (Max 250 karakter) :\n");
      gets(metin);
      while( metin[n] != '\0' )
      {
        if( metin[n] >= 'a' && metin[n] <= 'z' && metin[n] != 'i')
            metin[n] = metin[n] - 32;
        else if ( metin[n] == 'ü' )
            metin[n] = 'Ü';
        else if ( metin[n] == 'ð' )
            metin[n] = 'Ð';
        else if ( metin[n] == 'i' )
            metin[n] = 'Ý';
        else if ( metin[n] == 'ý' )
            metin[n] = 'I';
        else if ( metin[n] == 'þ' )
            metin[n] = 'Þ';
        else if ( metin[n] == 'ç' )
            metin[n] = 'Ç';
        else if ( metin[n] == 'ö' )
            metin[n] = 'Ö';
        n++;
      }
 
      printf("\n  : %s",metin);
      return 0;
}
