#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	float a,b,d,o,m;
	
	printf("Podaj liczbe rzeczywista a: ");
	scanf("%f",&a);
		
	printf("Podaj liczbe rzeczywista b: ");
	scanf("%f",&b);
	
	d = a+b;
	o = a-b;
	m = a*b;
	
	printf("Suma: %.2f \nRoznica: %.2f \nIloczyn: %.2f \n",d,o,m);
	

	
		system("Pause");
	return 0;
}
