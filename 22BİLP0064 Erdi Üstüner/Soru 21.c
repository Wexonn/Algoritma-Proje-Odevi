// evli misin sorusuna özel karakterle cevap verecegimiz icin evli degerini char ile tanimladik.cocuk degerini de int ile tanimladik.
// kullanýcýdan evli olup olmadýgýnýn cevabýný alýp scanf ile okuttuk.
// fflush(stdin) kullanarak tampon belleðini boþalttýk ve kodda bir hata çýkmasýný engelledik.
// kullanýcýnýn verdiði cevap evet ise kaç çocuðu olduðunu sorup çocuk sayýsýna göre aile türünü ekrana yazdýrdýk. Verdiði cevap hayýr ise "Umarým evlenirsiniz." cevabýný ekrana yazdýrarak kodu sonlandýrdýk.


#include <stdio.h>

 
int main()
{
 char evli = ' ';
 int cocuk = 0;
 

 
 printf("\n Evli misiniz? : ");
 scanf("%c",&evli);
 fflush(stdin);
 
 if( evli == 'E' || evli == 'e' )
 {
  printf("\n Kac cocugunuz var? : ");
  scanf("%i",&cocuk);
  fflush(stdin);
 
  if( cocuk > 2)
  {
    printf("\n Buyuk bir aileniz var.");
  }
  else
  {
   printf("\n Kucuk bir aileniz var.");
  }
 }
 else if( evli == 'H' || evli == 'h' )
  printf("\n Umarim evlenirsiniz.");
 else
  printf("\n Gecersiz girdi.");
 
return 0;
}
