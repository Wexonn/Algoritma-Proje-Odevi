//int ile sayi degerini tanimladik ve de�eri do�ru olarak varsaymak i�in flag kulland�k.
//kullan�c�dan bir sayi girmesini istedik ve scanf ile o say�y� okuttuk.
//for ve if ile say�n�n asal olup olmad���n� hesaplayan ve ekrana yazmam�z� sa�layan bir kod yazd�k.



#include <stdio.h>

int main()
{
      
       int sayi,flag = 0, i ;
       
       printf("Bir sayi giriniz:");
       scanf("%d", &sayi);
       
       for( i = 2; i <= sayi/2; i++) {
          if(i % i == 0) {
           flag = 1;
           break;
         }
       } 
       
       if(flag == 0)
          printf("Sayi Asaldir\n");
       else
       
          printf("Sayi Asal Degildir\n");
          
       return 0;
}
