#include <stdio.h>
#include <stdlib.h>

	int main(){
		int angka;
		
		printf("Masukkan angka: ");
		scanf("%d", &angka);
		
		if (angka < 0){
			printf ("Bilangan negatif\n");
		} else if (angka > 0){
			printf ("Bilangan positif\n");
		} else {
			printf ("Bilangan adalah 0");
		}
		return 0;
		
	}
