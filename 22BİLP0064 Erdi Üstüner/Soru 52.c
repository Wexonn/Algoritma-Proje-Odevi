//bu programda strlen parametresini kullanabilmek için stdlib.h kütüphanesini kullandıık.
//char ile dizi değerini tanımladık.
//kullanıcıdan bir metin girmesini istedikten sonra strlen parametresi ile girilen metnin uzunluğunu ekrana yazdırdık.


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
