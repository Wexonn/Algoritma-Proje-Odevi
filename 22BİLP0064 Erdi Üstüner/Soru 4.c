//int ile Kenar,alan ve cevre deðerlerini tanýmladýktan sonra kullanýcýdan kenar deðerini istedik ve kenarý tanýmlattýk. Sonrasýnda alan ve cevre degerlerini ekrana yazdýrdýk.

#include <stdio.h>

int main(){
	int kenar,alan,cevre;
	printf("Bir kenar giriniz: ");
	scanf("%d",&kenar);
	
	alan = kenar*kenar;
	cevre = kenar*4;
	
	printf("Alan = %d  Cevre = %d ", alan , cevre);
	
	return 0;
}
