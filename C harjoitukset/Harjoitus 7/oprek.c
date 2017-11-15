#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

	char sukunimi[31];
	char etunimi[31];
	int opnro;
	int vuosi;

}Opiskelija_t;

void valikko(void);
void hakuvalikko(void);
int lueKokonaisluku(void);
int lueTiedot(Opiskelija_t tiedot[], int maara);
void selaa(Opiskelija_t tiedot[], int maara);
void etsi(Opiskelija_t tiedot[], int maara);
void tulostaOpiskelija(Opiskelija_t op);
Opiskelija_t lueOpiskelija(void);
void lueMerkkijono(char mjono[], int koko);
void lueRoskat(void);

int main(void){

	int loppu=0;
	int valinta;
	Opiskelija_t tiedot[3];
	int maara = -1;

	do{
		valikko();
		valinta = lueKokonaisluku();

		switch(valinta){
			case 1: if(maara < 2)
					maara = lueTiedot(tiedot,maara);
				else
					printf("Ei mahdu enempää");
				break;

			case 2:	if (maara >=0)
					etsi(tiedot, maara);
				else
					printf("Tyhjä taulukko");
				break;

			case 3: if (maara >= 0)
					selaa(tiedot, maara);
				else
					printf("Tyhjä taulukko");
				break;

			case 0: loppu=1;
				break;
		}

	}while(!loppu);

	return(0);
}

int lueTiedot(Opiskelija_t tiedot[], int maara){

	maara = maara + 1;
	tiedot[maara] = lueOpiskelija();
	
	return maara;
}

Opiskelija_t lueOpiskelija(void){

	Opiskelija_t op;
	printf("\nAnna opiskelijan sukunimi \n");
	lueMerkkijono(op.sukunimi, 31);

	printf("Anna opiskelijan etunimi \n");
	lueMerkkijono(op.etunimi, 31);

	printf("Anna opiskelijanumero \n");
	op.opnro = lueKokonaisluku();

	printf("Anna kirjaitumisvuosi \n");
	op.vuosi = lueKokonaisluku();

	return op;
}

void etsi(Opiskelija_t tiedot[], int maara){

	int n;
	int nrohaku = 0;
	char nimihaku[31];
	int hakuvalinta;

	hakuvalikko();	
	hakuvalinta = lueKokonaisluku();

	switch(hakuvalinta){	
		case 1:
			printf("Anna haettavan opiskelijan sukunimi \n");
			lueMerkkijono(nimihaku, 31);

			for (n = 0; n <= maara; n++) {
				if (strcmp(nimihaku, tiedot[n].sukunimi) == 0) {
					tulostaOpiskelija(tiedot[n]);
				}
				else{
					printf("Opiskelijaa ei löytynyt\n");
				}
			}
			break;
		case 2:
			printf("Anna haettavan opiskelijan etunimi\n");
			lueMerkkijono(nimihaku, 31);

			for (n = 0; n <= maara; n++) {
				if (strcmp(nimihaku, tiedot[n].etunimi) == 0) {
					tulostaOpiskelija(tiedot[n]);
				}
				else{
					printf("Opiskelijaa ei löytynyt\n");
				}
			}
			break;
		case 3:
			printf("Anna haettava opiskelijanumero\n");
			nrohaku = lueKokonaisluku();

			for (n = 0; n <= maara; n++) {
				if (nrohaku == tiedot[n].opnro) {
					tulostaOpiskelija(tiedot[n]);
				}
				else{
					printf("Opiskelijaa ei löytynyt\n");
				}
			}
			break;
		case 4:
			printf("Anna haettava aloitusvuosi\n");
			nrohaku = lueKokonaisluku();

			for (n = 0; n <= maara; n++) {
				if (nrohaku == tiedot[n].vuosi){
					tulostaOpiskelija(tiedot[n]);
				}
				else{
					printf("Opiskelijaa ei löytynyt\n");
				}
			}
			break;
	}
}

void selaa(Opiskelija_t tiedot[], int maara){

	int i;

	for(i=0; i <= maara; i++){
		tulostaOpiskelija(tiedot[i]);
		printf("[ENTER]\n");
		fgetc(stdin);
	}
}

void tulostaOpiskelija(Opiskelija_t op){

	printf("Sukunimi: %s\n", op.sukunimi);
	printf("Etunimi: %s\n", op.etunimi);
	printf("Opiskelijanumero: %d\n", op.opnro);
	printf("Aloitusvuosi: %d\n", op.vuosi);
	printf("\n");
}

void valikko(void){

	printf("\n1. Opiskelijan lisäys \n");
	printf("2. Haku \n");
	printf("3. Selaus \n");
	printf("0. Lopetus \n");
}

int lueKokonaisluku( void ){

	int luku;
	int result = 0;
	char merkki;

	while( (result=scanf("%d%c", &luku, &merkki) ) == 0 || ( result == 2 && merkki != '\n') ){
		printf("\nEt syottanyt kokonaislukua!\n");
		lueRoskat();
		printf("\nYrita uudelleen > ");
	}

	return luku;
}


void lueMerkkijono( char merkkijono[], int koko){
   
   fgets( merkkijono, koko, stdin );
   
   if( merkkijono[ strlen(merkkijono) -1 ] == '\n')
      merkkijono[ strlen(merkkijono) -1 ] = '\0';
   else
      lueRoskat();
   
}

void hakuvalikko(void){

	printf("\n1. Hae sukunimellä \n");
	printf("2. Hae etunimellä\n");
	printf("3. Hae opiskelijanumerolla\n");
	printf("4. Hae aloitusvuodella\n");
}

void lueRoskat(void){
   
   while( fgetc(stdin) != '\n');
   
}

