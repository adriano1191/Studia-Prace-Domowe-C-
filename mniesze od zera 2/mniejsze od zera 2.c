#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,d,x;
	printf("podaj 4 liczby rzeczywiste.\n");
		printf("a:");
	scanf("%f",&a);
		printf("b:");
	scanf("%f",&b);
		printf("c:");
	scanf("%f",&c);
		printf("d:");
	scanf("%f",&d);
	
	if(a>=0){a=0;} else {a=1;}
	if(b>=0){b=0;} else {b=1;}
	if(c>=0){c=0;} else {c=1;}
	if(d>=0){d=0;} else {d=1;}
	
	x=a+b+c+d;
	printf("ilosc liczb mniejszych od zera: %.0f",x);
	

	
	
	return 0;
}
