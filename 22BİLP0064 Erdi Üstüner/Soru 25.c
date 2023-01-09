//int ile n ve sayi degerlerini tanýmladýk.
//kullanýcýdan bir sayý girmesini istedik ve scanf ile bu sayýyý okuttuk.
//for döngüsü ile girilen sayýnýn *1 den *10 a kadarki çarpým tablosunu oluþturduk ve printf ile ekrana yazdýrdýk.




#include <stdio.h>
 
void main(void)
{
 int sayi = 0;
 int n = 0;
 
 
 printf("\n Bir sayi girin : ");
 scanf("%i",&sayi);
 
 
 for(n=1;n<=10;n++)
 {
  printf("\n %i * %i = %i",sayi,n,(sayi*n) );
 }
 
 return 0;
}
