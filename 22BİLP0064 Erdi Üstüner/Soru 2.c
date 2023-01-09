//int ile girecegimiz sayi icin bir degisken tanimladik. scanf ile sayi girisini sagladik sonrasýnda girdigimiz sayinin ekrana yazilmasini sagladik.

#include <stdio.h>

int main()
{
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	printf("Girilen sayi: %d\n",sayi);
	
	return 0;
}
