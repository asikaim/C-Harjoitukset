#include <stdio.h>
#include <math.h>

int main(void){

	double valovuosi,
	etaisyys,
	matka,
	nopeus,
	tulos,
	tulosTunteina,
	tulosPaivina,
	tulosVuosina;

	valovuosi = 9.46 * pow(10, 15); 
	etaisyys = 4.2;
	matka = etaisyys * valovuosi;
	nopeus = 343;
	tulos = matka / nopeus;
	tulosTunteina = tulos / 60 / 60;
	tulosPaivina = tulosTunteina / 24;
	tulosVuosina = tulosPaivina / 365.2564; /* sideerinen vuosi */

	printf("Matka Proxima Centauri tähteen äänen nopeudella kestää: \n sekuntteina %lf \n tunteina %lf \n päivinä %lf \n vuosina %lf \n", tulos, tulosTunteina, tulosPaivina, tulosVuosina);

	return(0);
}
