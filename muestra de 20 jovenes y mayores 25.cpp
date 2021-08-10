//un disco necesita evaluar unna muestra de 20 jovenes y mayores 25
//cuantos son de hombres y mujeres
#include <stdio.h>
#include <conio.h>
 main(){
 int edad,i,genero;
 //inializacion de contadores
 int mujer=0,hombre=0,jovenes25=0;	
 for(i=1;i<=5;i++){
 printf("Edad\n");
 scanf("%d", &edad);
 if(edad>25){
 jovenes25=jovenes25+1;
 printf("indica genero 1)mujer 2)Hombres\n");
 scanf("%d", &genero);
 if(genero==1){
 mujer=mujer+1;	
 }	
 else{
 	hombre=hombre+1;
 }
 }	
 }
 printf("Total de jovenes mayores de 25, %d \n",jovenes25);
 printf("Total de mujeres %d total de hombres %d\n",mujer,hombre);
 getch();
 }
