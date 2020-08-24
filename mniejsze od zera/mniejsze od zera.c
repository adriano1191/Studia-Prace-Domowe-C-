#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 float a,b,c,d;
 printf("Podaj 4 liczby rzeczywiste\n");
printf("a: ");
 scanf("%f \n",&a);
printf("b: ");
 scanf("%f \n",&b);
printf("c: ");
 scanf("%f \n",&c);
printf("d: ");
 scanf("%f \n",&d);
 
 
printf("Liczby mniejsze od 0 to: \n");
 if(a<0)
 printf("%4.2f ",a);
 if(b<0)
 printf("%4.2f ",b);
 if(c<0)
 printf("%4.2f ",c);
 if(d<0)
 printf("%4.2f ",d);
if(a>0 && b>0 && c>0 && d>0)
printf("Brak liczb mniejszych od 0!");

 system("PAUSE");
 return 0;
}
