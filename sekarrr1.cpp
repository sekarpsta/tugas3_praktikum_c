#include <stdio.h>
#include <math.h>

int main(){
	
	float alas, tinggi, luas, keliling, sisiMiring;
	
	printf("alas: ");
	scanf("%f", &alas);
	printf("tinggi: ");
	scanf("%f", &tinggi);
	
	luas = alas * tinggi * 0.5;
	sisiMiring = sqrt((alas * alas) + (tinggi * tinggi));
	keliling = alas + tinggi + sisiMiring;
	
	printf("luas segitiga adalah: %.2f cm\n", luas);
	printf("keliling segitiga adalah: %.2f cm\n", keliling);
	
	return 0;
}
