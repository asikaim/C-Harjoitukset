#include <stdio.h>
double laskeParkkiMaksu(double aika);

int main(void){

	double parkkiAjat[3];
	double parkkiMaksut[3];
	double maksutYht = 0;
	double tunnitYht = 0;
	int i;

	printf("Syötä kolmen auton parkkiajat. \n");

	for(i=0;i<3;i++){
		printf("Anna %d. parkkiaika: \n", (i+1));
		scanf("%lf", &parkkiAjat[i]);
	}
	
	for(i=0;i<3;i++){
	parkkiMaksut[i] = laskeParkkiMaksu(parkkiAjat[i]);
	}

	printf("\nAsiakas		Tunnit		Veloitus  \n");
			
	for(i=0;i<3;i++){

		printf("%d		%.2lf		%.2lf\n", (i+1),parkkiAjat[i], parkkiMaksut[i]);

		maksutYht = laskeParkkiMaksu(parkkiAjat[i]) + maksutYht;
		tunnitYht = parkkiAjat[i] + tunnitYht;

	}
	
	printf("Yhteensä:	 %.2lf		%.2lf\n", tunnitYht, maksutYht);
	
	return(0);
}

double laskeParkkiMaksu(double aika){

	double veloitus = 0.0;

	if (aika <= 3)
		veloitus = 2.0;
	else if (aika <= 15.0)
		veloitus = 2+(aika-3) * 0.5;
	else
		veloitus = 10;
	return(veloitus);
}
