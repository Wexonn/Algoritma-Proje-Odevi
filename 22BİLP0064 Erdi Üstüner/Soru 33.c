//int ile sayi,rakam ve toplam degerlerini tanýmladýk.
//kullanýcýdan bir sayi degeri istedik ve scanf ile okuttuk.
//while ile sayidaki rakamlari toplayacak bir denklem yazdik ve ekrana yazdirdik.


#include <stdio.h>

int main()
{
	int sayi, rakam, toplam = 0;
	printf("\nBir Sayi Giriniz : ");
	scanf("%i", &sayi);
	
	while(sayi > 0) {
		rakam = sayi % 10;
		toplam = toplam + rakam;
		sayi = sayi / 10;
	}
	printf("\nSayidaki rakamlarin toplami : %i", toplam);
	return 0;
}
