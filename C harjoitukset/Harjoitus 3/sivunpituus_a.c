#include <stdio.h>

int main(void) {

	int koko;
	int x;
	int y;

	printf("Anna neliön sivujen pituus alueelta 1-20 \n");
	scanf("%d", &koko);
	
	if (koko > 0 && koko < 21) {
		for (x=0; x< koko; x++) {
	
			for( y=0; y< koko; y++){

			printf("*");

			}
			printf("\n");	
		}
	}
	else {

	printf("Virheellinen luku. \n");
	return(0);

	}
	return(0);
}
