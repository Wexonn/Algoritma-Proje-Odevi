//char kelime[10] ile maksimum 10 karakterlik bir kelime giri�i yapabilece�imiz bir de�er tan�mlad�k.
//kullan�c�dan kelime giri�ini yapmas�n� istedik ve kelimeyi ekrana yazd�rd�k. 

#include <stdio.h>

 
void main(void)
{
      char kelime[10];
 
   
 
      printf("\n Kelimeyi girin : ");
      gets(kelime);
     
 
      printf("\n Girilen Kelime : %s",kelime);
    return 0;
}
