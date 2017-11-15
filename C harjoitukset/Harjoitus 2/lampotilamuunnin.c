#include <stdio.h>

int main(void){

	double celsius, kelvin, fahrenheit;

	printf("Anna lämpötila celsius -asteina: ");
	scanf("%lf", &celsius);
	
	kelvin = celsius + 273.15;
	fahrenheit = (celsius) * 1.8 + 32;

	printf("Lämpötila: \n %lf kelviniä \n %lf fahrenheitia \n", kelvin, fahrenheit);

	return(0);
}
