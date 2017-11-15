#include <stdio.h>
#include <ctype.h>

int merkitSuureksi(char aakkoset[], int i);
int merkitPieneksi(char aakkoset[], int i);

int main(void) {

	int i = 0;
	char aakkoset[] = "abc";
	
	printf("Aakkoset: \n");
	merkitSuureksi(aakkoset, i);
	printf("\n");
	merkitPieneksi(aakkoset, i);
	printf("\n");

	return(0);
}

int merkitSuureksi(char aakkoset[], int i){

	while(aakkoset[i]){

		putchar (toupper(aakkoset[i]));
		i++;
	}
	return(0);
}

int merkitPieneksi(char aakkoset[], int i){

	while(aakkoset[i]){

		putchar (tolower(aakkoset[i]));
		i++;
	}
	return(0);
}
