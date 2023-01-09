//int yas ile yaþý tanýmladýktan sonra kullanýcýdan yaþ giriþini istiyoruz.
// sonrasýnda yaþý ay,hafta,gün,saat,dakika ve saniyeye dönüþtürüp ekrana yazdýrýyoruz.


#include <stdio.h>

int main()
{
    int yas; 

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &yas);  

    
    printf("Yasiniz %d ay, %d hafta, %d gun, %d saat, %d dakika ve %d saniyeye esittir.\n",
           yas * 12, yas * 52, yas * 365, yas * 8760, yas * 525600, yas * 31536000);

    return 0;
}

