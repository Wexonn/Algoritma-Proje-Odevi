//burada cümleyi tersine çevirebilmek için strlen ve stdlib.h kütüphanesini kullandıık.
//char ile cumle degerini tanımladıktan sonra kullanıcıdan bir cumle girmesini istedik.
// sonrasında for döngüsü yardımıyla cümleyi tersine çevirdik ve printf ile ekrana yazdırdık.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char cumle[100];
	int i;
	printf("Lutfen bir cumle giriniz:");
	gets(cumle);
	
	for(i=strlen(cumle);i>=0;i--)
	{
		printf("%c",cumle[i]);
		
	}
	return 0;
}
