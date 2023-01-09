//int ile kenarları tanımladıktan sonra kullanıcıdan kenar uzunluklarını aldık ve scanf ile degerleri okuduk.
//if,else ve else if ile kenarların eşit olup olmamasına göre eşitkenar,ikizkenar ve çeşitkenar üögen olduğunu ekrana yazdırdık.


#include <stdio.h>

int main()
{
	int kenar1, kenar2, kenar3;
	printf("1. Kenar uzunlugu girin: ");
	scanf("%d", &kenar1);
	
	printf("2. Kenar uzunlugu girin: ");
	scanf("%d", &kenar2);
	
	printf("3. Kenar uzunlugu girin: ");
	scanf("%d", &kenar3);
	
	if ((kenar1==kenar2) && (kenar2==kenar3))
	{
		printf("Esitkenar ucgen\n");
	}
	else if ((kenar1 == kenar2) || (kenar1 == kenar3) || (kenar2 == kenar3))
	{
		printf("Ikizkenar ucgen\n");
	}
	else
	{
		printf("Cesitkenar ucgen\n");
	}
	
	return 0;
}

