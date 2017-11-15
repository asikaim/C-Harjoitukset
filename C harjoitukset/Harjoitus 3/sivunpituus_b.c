#include <stdio.h>

int main(void) {

	int koko;
	int x;
	int y;

	printf("Anna neliön sivujen pituus alueelta 1-20 \n");
	scanf("%d", &koko);
	
	if (koko > 0 && koko < 21) {
		for (x=1; x<= koko; x++) {

			for( y=1; y<= koko; y++){
			
				if(x==1 || x==koko || y==1 || y==koko) {

					printf("*");

				}
				else {

					printf(" ");
				}
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
