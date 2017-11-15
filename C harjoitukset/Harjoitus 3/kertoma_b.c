#include <stdio.h>

int main(void){

	int kertoma = 1, x = 1, y = 5;

	do{

		kertoma = kertoma * x;
		x++;
	
	}	
	while(x <= y);

	printf("Lukujen 1-5 kertoma: %d \n", kertoma);

	return(0);
}
