//bu programda sdlib.h kütüphanesini metinleri birleþtirmek için kullandýk.
//char ile metin1 ve metin2 deðerlerini tanýmladýk.
//sonrasýnda kullanýcýdan adý ve soyadý giriþini saðladýk.
//strcat ile adý ve soyadýný birleþtirerek ekrana yazdýrdýk.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char metin1[50], metin2[50];
	printf("Adi giriniz:");
	gets(metin1);
	
	printf("Soyadi giriniz:");
	gets(metin2);
	
	strcat(metin1,metin2);
	printf("\nBirlestirilmis metin:");
	printf(metin1);
	printf("\n");
	return 0;
	
}
