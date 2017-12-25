
#include <stdio.h>

int main() {

	int i;
	int sayi1;
	int sayi2;
	int kucuksayi;
	int sonuc=1;

	printf("1. sayi: "); 
	scanf("%d", &sayi1);
	printf("2. sayi: ");
	scanf("%d", &sayi2);

	if(sayi1 < sayi2)
		kucuksayi = sayi1;
	else 
		kucuksayi = sayi2;

	for( i=2; i<= kucuksayi; i++) {
		if(sayi1 % i == 0 && sayi2 % i == 0)
			sonuc = i;
	}


	printf("OBEB(%d,%d) = %d", sayi1, sayi2, sonuc);

}
