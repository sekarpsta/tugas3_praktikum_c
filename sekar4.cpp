#include <stdio.h>

int main(){
	int angka;
	// input bilangan bulat positif
	printf("masukan bilangan bulat positif: ");
	scanf("%d", angka);
	
	//memastikan input adalah bilangan positif
	if (angka <= 0){
		printf("mohon masukan bilangan bulat positif.\n");
	} else {
	//mengecek ganjil atau genap
	if (angka % 2 == 0){
		printf("GENAP\n");
    } else {
    	printf("GANJIL\n");}
    }
    
    return 0;

}
