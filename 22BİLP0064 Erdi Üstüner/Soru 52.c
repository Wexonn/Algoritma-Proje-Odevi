//bu programda strlen parametresini kullanabilmek için stdlib.h kütüphanesini kullandýýk.
//char ile dizi deðerini tanýmladýk.
//kullanýcýdan bir metin girmesini istedikten sonra strlen parametresi ile girilen metnin uzunluðunu ekrana yazdýrdýk.


#include<stdio.h>
#include<stdlib.h>

int main()
{
	char dizi[50];
	
	printf("Lutfen metni giriniz.");
	gets(dizi);
	printf("Uzunluk:%d",strlen(dizi));
	
	printf("\n");
	return 0;
	
}
