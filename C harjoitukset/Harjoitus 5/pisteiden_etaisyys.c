#include <stdio.h>
#include <math.h>

const int koko = 10;

void luePisteet(double [][2], int koko);
void tulostaTaulukko(double [][2], int koko);
double laskeEtaisyys(double x1, double y1, double x2, double y2);

int main(void){

	double pisteet[10][2];
	double etaisyys = 0;
	int i = 0;

	luePisteet(pisteet, koko);	
	tulostaTaulukko(pisteet, koko);

	for(i=0; i < koko-1;i++){

	etaisyys = etaisyys + laskeEtaisyys(pisteet[i][0], pisteet[i][1], pisteet[i+1][0], pisteet[i+1][1]);
	}

	printf("Pisteiden välinen etäisyys on %lf \n", etaisyys);
	return(0);
}

void luePisteet(double pisteet[][2], int koko){
	int i = 0;

	for(i=0; i < koko; i++){

	printf("Anna x-koordinaatti: ");
	scanf("%lf", &pisteet[i][0]);

	printf("Anna y-koordinaatti: ");
	scanf("%lf", &pisteet[i][1]);
	}

}

void tulostaTaulukko(double pisteet[][2], int koko){

	int i,j;

	printf("\nKaksiulotteisen taulukon sisältö: \n");

	for(i=0; i < koko; i++){

		for(j=0; j < 2; j++){
		printf("%lf ", pisteet[i][j]);
		}

	printf("\n");
	}
	printf("\n\n");

}

double laskeEtaisyys(double x1, double x2, double y1, double y2){

	double etaisyys;
	etaisyys = sqrt((x1 - y1) * (x1 - y1) + (x2 - y2) * (x2 - y2));
	return etaisyys;	
}
