//int ile i,faktoriyel ve sayi degerlerini tanimladik.,
//kullanicidan bir sayi girmesini istedik ve scanf ile sayiyi okuttuk.
//for ile sayinin faktoriyelini alabilecegimiz bir denklem yazdik ve sayinin faktoriyelini ekrana yazdirdik.


#include <stdio.h>

main()
{
	int i;
	int faktoriyel = 1;
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i = 1; i <= sayi; i++)
	{
		faktoriyel *= i;
	}
	printf("%d != %d",sayi,faktoriyel);
}
