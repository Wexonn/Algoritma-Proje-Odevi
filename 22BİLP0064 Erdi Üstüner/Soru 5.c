//int ile değişkenleri tanımladıktan sonra kısa ve uzun kenar girişini kullanıcıdan istedik.
//alan ve cevre hesaplamalarını tanımladık
//cevre ve alan hesaplamalarını printf ile ekrana yazdırdık.



#include <stdio.h>


int main(){
	
    int kenar1, kenar2, kare, cevre;

    printf("Kisa Kenar giriniz: ");
    scanf("%d",& kenar1);
    
    printf("Uzun Kenar giriniz: ");
    scanf("%d",& kenar2);
   
    kare = kenar1*kenar2;
    cevre = 2*(kenar1+kenar2);
    
    printf("Dikdortgenin Cevresi : %d", cevre);
    printf("Dikdortgenin Alani : %d", kare);
    
    return 0;
}
