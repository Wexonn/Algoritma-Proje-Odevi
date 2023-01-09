//matematiksel iþlemler için math.h kütüphanesini ekledik ve int ile sayýyý tanýmladýk.
//printf ile kullanýcýdan sayý giriþini aldýk ve tanýmlattýk.
//if ve else ile sayý ikiye tam bölünüyorsa çift,kalanlý bölünüyorsa tek cevabýný verecek kodu yazdýk.
//son olarak sonucu ekrana yazdýrdýk. 



#include <stdio.h>
#include <math.h>

int main(){
	
	int sayi;
     
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
 
	if(sayi%2 == 0)

    printf("%d sayisi cifttir.", sayi);
		
	else

	printf("%d sayisi tektir.", sayi);
}

