//int ile Kenar,alan ve cevre değerlerini tanımladıktan sonra kullanıcıdan kenar değerini istedik ve kenarı tanımlattık. Sonrasında alan ve cevre degerlerini ekrana yazdırdık.

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
