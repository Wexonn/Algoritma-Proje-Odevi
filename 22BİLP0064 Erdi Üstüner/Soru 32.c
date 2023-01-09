//<conio.h> kütüphanesini fflush(stdin) parametresini kullanabilmek için programýmýza ekledik.
//char,float ve double ile devammi,sayi1,sayi2,sonuc ve islem degerlerini tanimladik.
//kullanýcýdan 2 sayý girmesini istedik ve scanf ile okuttuk.
//if,else ve else if ile seçimler yapmayý saðladýk. Hatalý bir seçim yapýldýðýnda hatalý giriþ yaptýðýmýzý belirten bir yazýyý ekrana yazdýrmayý saðladýk.
//iþlemlerden sonra baþka hesap yapmak isteyip istemediðimizi soran bir yazýyý ekrana yazdýrdýk.Cevap olarak evet dediðimizde iþlemlere devam edebiliyor,hayýr dediðimizde ise programý sonlandýrýyoruz.

#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 char devammi;
 float sayi1 = 0;
 float sayi2 = 0;
 double sonuc = 0;
 char islem = ' ';
 do 
 { 
 
  
 
  printf("\n 1. sayi : ");
  scanf("%f",&sayi1);
  fflush(stdin);
 
  printf("\n 2. sayi : ");
  scanf("%f",&sayi2);
  fflush(stdin);
 
  printf("\n Yapilacak islem ? ( + - / * % ): ");
  scanf("%c",&islem);
  fflush(stdin);
  if( islem == '+')
   sonuc = sayi1 + sayi2;
  else if( islem == '-')
   sonuc = sayi1 - sayi2;
  else if( islem == '*')
   sonuc = sayi1 * sayi2;
  else if( islem == '/')
  {
   if( sayi2 > 0)
    sonuc = sayi1/sayi2;
   else
    printf("\n HATA: Sifira bolunme hatasi.");
  }
  else
   printf("\n Gecerli bir islem belirtmediniz.");
 
  printf("\n\n %.2f %c %.2f = %.3f",sayi1,islem,sayi2,sonuc);
 
  printf("\n\n Baska hesaplama yapacak misiniz?(E/H): ");
  devammi = getchar();
  fflush(stdin);
 }
 while(devammi == 'E' || devammi == 'e');
}
