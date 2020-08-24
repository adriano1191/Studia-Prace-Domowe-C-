#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	float a,b,c,d,po,pi,x,y;

	
	printf("a: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	printf("c: ");
	scanf("%f",&c);
	
	
	printf("%.2fx^2 + %.2fx + %.2f = 0 \n\n",a,b,c);
	printf("D = %.2f^2 - 4 * %.2f * %.2f\n\n",b,a,c);
	
	/*b = 2;*/
	

	po = pow(b,2);
		
	/*printf("%.2f\n",po);*/
	
	d = po - 4*a*c;
	printf("D = %.2f",d);
	

	
if(d>0){
	


	pi = sqrt(d);
	printf("\npi = %.2f\n",pi);


	x = (-b	- pi) / (2*a);
	printf("\n x1 = %.2f",x);

	y = (-b	+ pi) / (2*a);
	printf("\n x2 = %.2f",y);

}

if(d==0){
	x = -b/(2*a);
	printf("\nx0 = %.2f",x);
}

if(d<0)	{
	printf("\nzle\n");


}
system("\n\nPause");
	return 0;
}
