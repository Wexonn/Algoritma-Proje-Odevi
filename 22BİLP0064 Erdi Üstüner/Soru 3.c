// int ile sayi degerlerini ve toplam degerini verecek degerleri tanýmladýk. 
// sonrasýnda printf ve scanf ile kullanýcýdan sayý giriþlerini aldýk. 
// toplam degerine sayi1 + sayi2 degerini vererek iki sayiyi da toplattik ve cikan sonucu ekrana yazdirdik.


#include <stdio.h>

int main()
{
	int sayi1,sayi2,toplam;
	
	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&sayi1);
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);
	
	toplam = sayi1 + sayi2;
	
	printf("Girilen sayilarin toplami: %d\n", toplam);
	
	return 0;
}
