//int ile kenarlar� tan�mlad�ktan sonra kullan�c�dan kenar uzunluklar�n� ald�k ve scanf ile degerleri okuduk.
//if,else ve else if ile kenarlar�n e�it olup olmamas�na g�re e�itkenar,ikizkenar ve �e�itkenar ��gen oldu�unu ekrana yazd�rd�k.


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

