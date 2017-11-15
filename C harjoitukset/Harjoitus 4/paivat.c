#include <stdio.h>
int karkausvuosi(int vuosi);
int laskut(int kuukausi1, int kuukausi2);


int main (void) {

	int kuukausi1, kuukausi2, kkVali=0;

	printf("Anna kuukausi muodossa mm. Esim. 2 tai 11: \n");
	scanf("%d", &kuukausi1);

	printf("Anna kuukausi muodossa mm. Esim. 2 tai 11: \n");
	scanf("%d", &kuukausi2);

	if ((kuukausi1 < 13 && kuukausi1 > 0) && (kuukausi2 < 13 && kuukausi2 > 0)) { 
	kkVali = laskut(kuukausi1, kuukausi2);
	printf("Kuukausien välissä on %d päivää. \n", kkVali);
	}
	else{
	printf("Annoit virheellisiä lukuja\n");
	}

	return(0);
}

int laskut(int kuukausi1, int kuukausi2){
	
	int paivat=0, karkaus, vuosi, i;
	int paivatPerKK[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        int paivatPerKarkaus[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

	printf("Anna vuosiluku: \n");
	scanf("%d", &vuosi);
	
	karkaus = karkausvuosi(vuosi);

	if (karkaus == 1) {
		if(kuukausi1 < kuukausi2){

			for(i = kuukausi1; i <= kuukausi2; i++){
						
			paivat = paivat + paivatPerKarkaus[i];

			}
		}		
		else {
		
			for(i = kuukausi2; i <= kuukausi1; i++){
			paivat = paivat + paivatPerKarkaus[i];

			}
		}	
	}
	else {
		if(kuukausi1 < kuukausi2){

			for(i = kuukausi1; i <= kuukausi2; i++){
			paivat = paivat + paivatPerKK[i];
			
			}
		}
		else {
		
			for(i = kuukausi2; i <= kuukausi1; i++){
			paivat = paivat + paivatPerKK[i];

			}
		}
	}
	return(paivat);
} 

int karkausvuosi(int vuosi) {

	int onkoKarkaus;

	if(((vuosi%4 == 0) && (vuosi%100 !=0)) || (vuosi%400==0))
	        onkoKarkaus = 1;    
	else    
	        onkoKarkaus = 0;    

	return(onkoKarkaus);
}
