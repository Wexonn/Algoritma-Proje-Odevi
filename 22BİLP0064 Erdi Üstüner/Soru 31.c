//int ile sayi degerini tanýmladýk.
//while ile sayý 0 dan büyük veya eþit iken döngüyü devam ettirmesi ve kodun durmamasý için bir denklem girdik.
//negatif bir sayý girdiðimizde ise "x sayýsýný girdiniz" yazýsýný ekrana yazdýrdýk.


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
