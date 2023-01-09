//float ile yol,zaman ve hiz degerlerini tanimladik
//kullanicidan gitmek istedigi mesafe ve sure degerlerini isteyip scanf ile tanimlattik
//sonrasinda hiz hesaplamasini da tanimladiktan sonra gidilmesi gereken hizi ekrana yazdirdik.

#include <stdio.h>

main()
{
	float yol;
	float zaman;
	float hiz;
	
	printf("Gideceginiz mesafe (km) :");
	scanf("%f",&yol);
	printf("Gtimek istediginiz sure (saat) :");
	scanf("%f",&zaman);
	
	hiz = yol / zaman;
	printf("Gitmeniz gereken hiz = %f",hiz);
}
