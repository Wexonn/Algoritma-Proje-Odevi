//int ile yasi tanimiyoruz.
//kullanýcýdan yaþ deðerini girmesini isteyip scanf ile yaþ giriþini alýyoruz.
//if ve else ile yaþýnýn 18 den büyük olup olmadýðýna göre ekrana "Oy kullanmak için yaþýnýz yeterli." veya "Oy kullanmak için yaþýnýz yeterli deðil." yazdýrýyoruz.


#include <stdio.h>

int main()
{
    int yas;  // Yaþ için bir tamsayý deðiþken tanýmlanýr

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &yas);  // Yaþ giriþi alýnýr

    // Yaþ deðerine göre oy kullanma yeterliliði kontrol edilir
    if (yas >= 18) {
        printf("Oy kullanmak için yasiniz yeterli.\n");
    }
    else {
        printf("Oy kullanmak icin yasiniz yeterli degil.\n");
    }

    return 0;
}

