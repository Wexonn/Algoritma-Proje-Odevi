//int ile sayi degerini tan�mlad�k.
//while ile say� 0 dan b�y�k veya e�it iken d�ng�y� devam ettirmesi ve kodun durmamas� i�in bir denklem girdik.
//negatif bir say� girdi�imizde ise "x say�s�n� girdiniz" yaz�s�n� ekrana yazd�rd�k.


#include <stdio.h>

 
int main()
{
 int sayi = 0;
 
 
 while( sayi >= 0)
 {
  printf("\nSayi? : ");
  scanf("%i",&sayi);
  
 
  printf("%i sayisini girdiniz.",sayi);
 }
}
