#include <stdio.h>
const double leikkurinopeus = 1.388888889;
const double leikkurileveys = 0.7;

int main(void) {

	double tontinleveys,
	tontinpituus,
	talonleveys,
	talonpituus;

	double tontinPala,
	talonPala,
	leikAlue;

	double tehoLeik,
	leikAik;

	printf("Syota tontin leveys metreina: \n");
	scanf("%lf", &tontinleveys);

	printf("Syota tontin pituus metreina: \n");
	scanf("%lf", &tontinpituus);

	printf("Syota talon leveys metreina: \n");
	scanf("%lf", &talonleveys);

	printf("Syota talon pituus metreina: \n");
	scanf("%lf", &talonpituus);

	tontinPala = tontinleveys * tontinpituus;
	talonPala = talonleveys * talonpituus;

	leikAlue = tontinPala - talonPala;
	
	tehoLeik = leikkurinopeus * leikkurileveys;
	leikAik = leikAlue / tehoLeik;

	printf("Arvioitu leikkuuaika on %lf sekunttia. \n", leikAik);

	return(0);
	
}
