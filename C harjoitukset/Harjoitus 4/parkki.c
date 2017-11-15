#include <stdio.h>
float laskeVeloitus(int tunnit);

int main(void) {

	int i,h;
	int ensin=1;
	int tunnitYht=0;
	float veloitusYht=0;

	printf("Syötä kolmen auton parkkiaika: \n");
	
	for (i=1; i<4; i++){
	

		if(ensin){
			printf("Asiakas		Tunnit		Veloitus  ");
			ensin=0;
			
		}
		scanf("%d", &h);
		printf("%d		%d		%5.2f\n", i,h, laskeVeloitus(h) );

		veloitusYht = laskeVeloitus(h) + veloitusYht;
		tunnitYht = tunnitYht + h;
	}

	printf("Yhteensä:	 %d		%5.2f\n", tunnitYht, veloitusYht);

	return(0);
}

float laskeVeloitus(int tunnit){

	if (tunnit == 24)
		return(10);
	else if (tunnit > 3)
		return (tunnit-3) * 0.5 + 2;
	else return 2;

}
