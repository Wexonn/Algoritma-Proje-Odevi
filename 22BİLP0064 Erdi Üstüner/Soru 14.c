//float ile not degerini tanimladik.
//kullanicidan not girisini aldiktan sonra scanf ile notu okuttuk.
//if,else ve else if ile nota bagli olarak nota karþýlýk gelen durumu ekrana yazdýrdýk.

#include <stdio.h>

 
int main()
{
 float not;

 
 printf(" Bir not giriniz: ");
 scanf("%f",&not);
 
 
 if( not >= 80 && not <= 100 )
  printf("\n pek iyi ");
 else if( not >= 60 && not < 80 )
  printf("\n iyi ");
 else if( not >= 40 && not < 60 )
  printf("\n fena degil");
 else if( not >= 20 && not < 40 )
  printf("\n gecer ");
 else if( not >= 0 && not < 20 )
  printf("\n kaldi");
 else
  printf("\n gecersiz not girdiniz!");
 
 return 0;
}
