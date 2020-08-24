#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 int a,b,c,d;
 printf("podaj 3 liczby\n");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b){
  d=a;
  a=b;
  b=d;
 }
 if(b>c){
  d=b;
  b=c;
  c=d; 
 }
  if(a>b){
  d=a;
  a=b;
  b=d;
 }
 printf("kolejnosc to %d %d %d\n",a,b,c);
 
 system("PAUSE");
 return 0;
}
