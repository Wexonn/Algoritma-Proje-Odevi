//int ile x1,y1,x2,y2 degerlerini tan�mlad�k.
//float ile mesafeyi tan�mlad�k ondal�kl� ��kabilece�i i�in.
//kullan�c�dan ilk koordinatlar� istedik
//veriyi ilgili ��k��a yazabilmek i�in fflush(stdin) kulland�k
//ayn� i�lemi ikinci koordinatlar i�in de yapt�k ve mesafe denklemini yazd�k.
//mesafeyi belirleyebilmek i�in sqrt() ve pow() parametrelerinden yararland�k.
//son olarak ekrana iki koordinat aras�ndaki mesafeyi yazd�rd�k.


#include <stdio.h>
#include <math.h>
 
void main(void)
{
 int x1 = 0, y1 = 0;
 int x2 = 0, y2 = 0;
 float mesafe = 0 ;
 printf("\n 1. Nokta (X Y): ");
 scanf("%d %d",&x1,&y1);
 fflush(stdin);
 
 printf("\n 2. Nokta (X Y): ");
 scanf("%d %d",&x2,&y2);
 fflush(stdin);
 
 mesafe = sqrt( pow( (y2-y1),2) + pow((x2-x1),2) ) ;
 printf("\n Mesafe : %.2f",mesafe);
 
 return 0;
}
