#include <stdio.h>

int main(void){

	int luku = 0, summa = 0;
	int loop_maara = -1;
	float karvo;

	printf("Syötä kokonaisluvut joiden keskiarvon haluat laskea. \nKeskiarvo tulostuu kun syötät ohjelmaan luvun 0 \n");

	do {
		printf("Syötä luku: \n");
		loop_maara++;
		summa = summa + luku;
		scanf("%d", &luku);
	}
	while(luku > 0);

		karvo = summa/loop_maara;		

		printf("Lisäsit %d lukua \n", loop_maara);
		printf("Lukujen keskiarvo on %.2f \n", karvo);

	
	return(0);
}
