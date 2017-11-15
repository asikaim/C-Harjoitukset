#include <stdio.h>

int tulostus(int taulukko1[], int taulukko2[], int i, int num);

int main(void) {

	int taulukko1[10];
	int taulukko2[10];
	int i = 0, num = 0;

	printf("Anna lukujen määrä: \n");
	scanf("%d", &num);

	printf("Anna luvut: \n");
	for (i = 0; i < num; i++){
	scanf("%d", &taulukko1[i]);
	}

	for (i = 0; i < num; i++) {
      	taulukko2[i] = taulukko1[num-1-i];
   	}

	tulostus(taulukko1, taulukko2, i, num);
	
return(0);
}

int tulostus(int taulukko1[], int taulukko2[], int i, int num){

	printf("\nTaulukot:\n");
	for (i = 0; i < num; i++){
	printf("%d \t", taulukko1[i]);
	printf("%d \t \n", taulukko2[i]);
	}

	return(0);
}
