//int ile sayi1 ve sayi2 degerini tanimladik.
//sonrasinda kullanicidan bu degerleri istedik ve tanimlattik.
//if,else ve else if ile sayilarin buyukluk siralamasi veya esit oldugunu ekrana yazdirdik.


#include <stdio.h>


int main(){
 
    int sayi1, sayi2;
 
    printf("Birinci Sayiyi Giriniz: ");
    scanf("%d", &sayi1);
 
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);
 
    if ( sayi1 > sayi2)
        printf("%d > %d", sayi1, sayi2);
 
    else if ( sayi1 == sayi2)
        printf("%d = %d", sayi1, sayi2);
    
    else 
        printf("%d > %d", sayi2, sayi1);
    
    
	   
    return 0; 
}

