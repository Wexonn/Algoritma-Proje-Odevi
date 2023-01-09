//int ve char ile deðiþkenlerimizi tanýmladýk.
//kullanýcýdan bir sayý giriþi aldýk.
//for döngüsüyle belirlediðimiz sayýlarýn arasýndan sayý giriþi aldýðýmýz sayýyý aradýk.
//if ile eðer sayýyý bulduysak sayýnýn listenin kaçýncý sýrasýnda olduðunu gösteren bir yazý,bulamadýysak ta sayýnýn geçerli olmadýðýný gösteren bir yazýyý ekrana çýkardýk.


#include <stdio.h>

 
void main(void)
{
 int sayilar[10] = {4,11,15,36,55,83,42,99,18,10};
 int aranan = 0;
 int konum = 0;
 int sayac = 0;
 
 char bulundu = 'Y';
 
 printf("\n Liste icerisinde aranacak sayi : ");
 scanf("%i",&aranan);
 
 for( sayac= 0; sayac < 10; sayac++ )
 {
  if( sayilar[sayac] == aranan )
  {
   bulundu = 'E';
   konum = sayac + 1;
   break;
  }
 }
 
 if(bulundu == 'E' )
  printf("\n %i sayisi listenin %i. sirasinda.",aranan,konum);
 else
  printf("\n %i sayisi gecerli degil.",aranan);
 
 return 0;
}
