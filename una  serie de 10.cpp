/** 1°Diseñe su algoritmo que imprima una serie de 10 numeros de forma descendente entre 1 a 10
2 ° su algoritmo o logica seria la siguiente:
inicio 
para(i=1, i<=10; i incremento de 1)
imprimir i
fin para
fin
*/
#include<stdio.h>
#include<conio.h>
main(){
int i;//solamente se declara una variable ya que solamente nos pide un dato 
for(i=10;i>=0;i--){
	printf("%d \n", i);
}
getch();
}

