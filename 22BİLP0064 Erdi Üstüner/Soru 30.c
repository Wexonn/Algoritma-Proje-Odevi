//int ile de�i�kenleri tan�mlad�k.
//sonra for d�ng�s� ile piramidin �eklini olu�turduk ve ekrana yazd�rd�k.



#include <stdio.h>

 
void main(void)
{
 void bosluk(int);
 int satir = 0;
 int sayi = 0;
 int s = 40;
 
 
 for(satir =1;satir<10;satir++)
 {
  printf("\n");
  bosluk(s);
 
  for(sayi= 1; sayi <= satir;sayi++)
   printf("%i ",sayi);
 
  for(sayi= satir-1; sayi >= 1;sayi--)
   printf("%i ",sayi);
  s = s -2;
 }
 
 return 0;
}
 
void bosluk(int t)
{
 int sayac = 0;
 for(sayac = 1 ; sayac <= t;sayac++)
 putchar(' ');
}
