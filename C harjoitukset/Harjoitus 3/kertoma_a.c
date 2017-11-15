#include <stdio.h>

int main(void){

	int kertoma = 1, x = 1, y = 5;

	while(x <= y){
	
		kertoma = kertoma * x;
		x++;

	}

	printf("Lukujen 1-5 kertoma: %d \n", kertoma);

	return(0);
}
