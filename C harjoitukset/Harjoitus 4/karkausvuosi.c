#include <stdio.h>
int karkausvuosi(int vuosi);

int main (void){

	int vuosi;

	printf("Anna vuosiluku: ");
	scanf("%d", &vuosi);

	if(!karkausvuosi(vuosi))
		printf("On karkausvuosi\n");
	else
		printf("Ei ole karkausvuosi\n");

}

int karkausvuosi(int vuosi) {
  
    if(((vuosi%4 == 0) && (vuosi%100 !=0)) || (vuosi%400==0))  /*optimaalisin tapa laskea karkausvuosi */
        return 1;    
    else    
        return 0;    
}  

