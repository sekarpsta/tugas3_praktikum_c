#include <stdio.h>
#include <math.h>

int main(){
	
	float alas, tinggi, miring;
	
	printf("alas: ");
	scanf("%f", &alas);
	printf("tinggi: ");
	scanf("%f", &tinggi);
	
	miring = sqrt((alas * alas) + (tinggi * tinggi));
	
	printf("sisi miring segitiga adalah: %.2f cm\n", miring);
	
	return 0;
}
