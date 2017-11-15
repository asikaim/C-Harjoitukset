#include <stdio.h>

int main(void){

	int pistemaara;

	printf("Anna pistemäärä (0-24): ");
	scanf("%d", &pistemaara);

	if (pistemaara >= 25){
		printf("Virheellinen pistemäärä \n");
	}
	
	else if (pistemaara > 22){
		printf("Arvosana on 5 \n");
	}

	else if (pistemaara > 19){
		printf("Arvosana on 4 \n");
	}

	else if (pistemaara > 16){
		printf("Arvosana on 3 \n");
	}

	else if (pistemaara > 13){
		printf("Arvosana on 2 \n");
	}

	else if (pistemaara > 11){
		printf("Arvosana on 1 \n");
	}

	else {
		printf("Hylätty \n");
	}

	return(0);
}
