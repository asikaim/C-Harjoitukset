#include <stdio.h>

int main(void){

	int kertoma = 1, x = 1, y = 21;

	while(x <= y){
	
		kertoma = kertoma * x;
		x++;

	}

	printf("Lukujen 1-21 kertoma: %d \n", kertoma);

	return(0);
}

/* Luvun 21 kertoma aiheuttaa ylivuodon (ns. integer overflow), sillä bitit eivät riitä näyttämään oikeaa vastausta */
