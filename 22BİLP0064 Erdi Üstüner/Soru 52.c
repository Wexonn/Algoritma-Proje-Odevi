//bu programda strlen parametresini kullanabilmek i�in stdlib.h k�t�phanesini kulland��k.
//char ile dizi de�erini tan�mlad�k.
//kullan�c�dan bir metin girmesini istedikten sonra strlen parametresi ile girilen metnin uzunlu�unu ekrana yazd�rd�k.


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
