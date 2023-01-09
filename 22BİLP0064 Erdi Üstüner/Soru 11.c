//int ile x1,y1,x2,y2 degerlerini tanýmladýk.
//float ile mesafeyi tanýmladýk ondalýklý çýkabileceði için.
//kullanýcýdan ilk koordinatlarý istedik
//veriyi ilgili çýkýþa yazabilmek için fflush(stdin) kullandýk
//ayný iþlemi ikinci koordinatlar için de yaptýk ve mesafe denklemini yazdýk.
//mesafeyi belirleyebilmek için sqrt() ve pow() parametrelerinden yararlandýk.
//son olarak ekrana iki koordinat arasýndaki mesafeyi yazdýrdýk.


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
