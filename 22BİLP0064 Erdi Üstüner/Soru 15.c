//bu sefer bir karakter tan�mlayacag�m�z i�in 'char' kullanarak harfi tan�ml�yoruz.
//kullan�c�dan harf degerini isteyip scanf ile okutuyoruz.
//if ve else ile girilen harfin sesli olup olmad�g�n� ekrana yazd�r�yoruz.


#include <stdio.h>

 
int main()
{
 char harf = ' ';
 
 
 printf(" Bir harf giriniz :");
 scanf("%c",&harf);
 
 if( harf == 'A','a' || harf == 'E','e' || harf == 'I','i' || harf == 'O','o'  || harf == 'U','u' )
  printf(" %c sesli harftir.",harf);
 else
  printf(" %c sesli harf degildir.",harf);
 
 return 0;
}
