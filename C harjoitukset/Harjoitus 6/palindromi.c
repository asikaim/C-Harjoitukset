#include <stdio.h>
#include <string.h>

int kaanto(char a[], char b[]);

int main(void){

	char a[6];
	char b[6];

	printf("Ohjelma tulostaa merkkijonon ja tarkastaa onko kyseessä palindromi \n");
	printf("Syötä viiden merkin merkkijono: \n");
	scanf("%s", a);

	kaanto(a, b);

	printf("Alkuperäinen merkkijono on %s \n", a);
	printf("Käännetty merkkijono on %s \n", b);

	if(strcmp(a, b) == 0)
		printf("Merkkijono on palindromi. \n");
	else
		printf("Merkkijono ei ole palindromi. \n");

	return(0);

}

int kaanto(char a[], char b[]){

	int i;
	int j = 0;
	char temp;

 	strcpy(b, a);

	i = 0;
	j = strlen(b) - 1;

	while (i < j) {

	temp = b[i];
	b[i] = b[j];
	b[j] = temp;
	i++;
	j--;

	}	
	return(0);
}
