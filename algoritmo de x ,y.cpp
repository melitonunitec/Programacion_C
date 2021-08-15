/**1° Elabora un algoritmo que calcule el valor de "y" cuando "x" cambia de 1 a 10
en la segunda ejecucion y=x+12.
algoritmo/logica
inicio 
x=1;
mientras(x<=10)
y=x+12;
imprir "x=" x "," "y=" y
x=x+1;
fin mientras
fin
*/
#include<stdio.h>
#include<conio.h>
main(){
int x,y;
x=1;
while(x<=10){
y=x+12;
printf(" x= %d y= %d \n",x,y);
x=x+1;	
}
getch();
}
