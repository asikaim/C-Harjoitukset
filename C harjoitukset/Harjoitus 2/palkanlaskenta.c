#include <stdio.h>

int main(void) {
	
	double tuntipalkka,
	tuntimaara,
	veroprosentti;

	printf("Anna tuntipalkka:");
	scanf("%lf", &tuntipalkka);
	printf("Anna tuntimaara: ");
	scanf("%lf", &tuntimaara);
	printf("Anna veroprosentti: ");
	scanf("%lf", &veroprosentti);

	double bruttopalkka,
	verottajanOsuus,
	nettopalkka;

	bruttopalkka = tuntipalkka * tuntimaara;
	verottajanOsuus = veroprosentti / 100 * bruttopalkka;
	nettopalkka = bruttopalkka - verottajanOsuus;

	printf("Nettopalkka on %lf euroa. \n", nettopalkka);
	printf("Verottajan osuus on %lf euroa.", verottajanOsuus);

	return(0);


}
