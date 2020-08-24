#include <stdio.h>
#include <stdlib.h>



int main() {
 float a,b,ob,p;
	printf("Podaj bok a: ");
	scanf("%f",&a);
	printf("Podaj bok b: ");
	scanf("%f",&b);
	
	
	ob = 2*a + 2*b;
	p = a * b;
	printf("\n2 * %.2f + 2 * %.2f = %.2f\n\n",a,b,ob);
	printf("Obwod prostokata wynosi %.2f \n\n",ob);
	

	printf("%.2f * %.2f = %.2f \n\n",a,b,p);
	printf("Pole prostokata wynosi %.2f \n\n\n\n\n",p);
	
	system("pause");
	
	return 0;
}
