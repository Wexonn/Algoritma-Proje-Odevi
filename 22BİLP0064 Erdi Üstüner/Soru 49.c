//char kelime[10] ile maksimum 10 karakterlik bir kelime giriþi yapabileceðimiz bir deðer tanýmladýk.
//kullanýcýdan kelime giriþini yapmasýný istedik ve kelimeyi ekrana yazdýrdýk. 

#include <stdio.h>

 
void main(void)
{
      char kelime[10];
 
   
 
      printf("\n Kelimeyi girin : ");
      gets(kelime);
     
 
      printf("\n Girilen Kelime : %s",kelime);
    return 0;
}
