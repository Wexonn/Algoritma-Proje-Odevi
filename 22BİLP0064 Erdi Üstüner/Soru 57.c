//char ve int ile de�erleri tan�mlad�k.
//char parametresinde 250 karakteri belirtti�imiz i�in maksimum 250 karakter yaz�labilecek �ekilde kullan�c�dan bir metin istedik.
//while,if ve else if ile t�rk�e harfler de dahil olmak �zere b�y�k yazabilmemiz i�in bir denklem yazd�k ve sonucu ekrana yazd�rd�k.


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
        else if ( metin[n] == '�' )
            metin[n] = '�';
        else if ( metin[n] == '�' )
            metin[n] = '�';
        else if ( metin[n] == 'i' )
            metin[n] = '�';
        else if ( metin[n] == '�' )
            metin[n] = 'I';
        else if ( metin[n] == '�' )
            metin[n] = '�';
        else if ( metin[n] == '�' )
            metin[n] = '�';
        else if ( metin[n] == '�' )
            metin[n] = '�';
        n++;
      }
 
      printf("\n  : %s",metin);
      return 0;
}
