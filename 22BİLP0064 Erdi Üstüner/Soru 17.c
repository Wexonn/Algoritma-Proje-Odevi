//int ile yasi tanimladik.
//sonrasinda kullanicidan yas degerini alip scanf ile okuttuk.
//if,else ve else if ile girilen yas degerinin hangi anlama denk geldigini ekrana yazdirdik.


#include <stdio.h>

 
int main()
{
 int yas;
 
 
 
 printf("\n Yasinizi giriniz : ");
 scanf("%i",&yas);
 
 
 if( yas >= 1 && yas <= 4)
  printf("\n Bebek");
 else if( yas > 4 && yas <= 13 )
  printf("\n Cocuk");
 else if( yas > 14 && yas <= 18 )
  printf("\n Genc");
 else if( yas > 18 && yas <= 45 )
  printf("\n Yetiskin ");
 else if( yas > 60 )
  printf("\n Yasli");
 else
  printf("\n Gecersiz Yas...");
 
 return 0;
}
