#include<stdio.h>
#include<conio.h>
#include<math.h>
 //calcular el promedio de un alumno que tiene 5 calificaciones
 int main(){
 int reg;
 float cal1, cal2, cal3,  cal4, cal5 ,pro;

 printf("introduzce numero de  registro \n");
 scanf("%d",&reg);
 
 printf("introdusca la calificacion 1");
 scanf("%f",&cal1);
 
 printf("introdusca la calificacion 2");
 scanf("%f",&cal2);
 
 printf("introdusca la calificacion 3");
 scanf("%f",&cal3);
 
printf("introdusca la calificacion 4");
 scanf("%f",&cal4);
 
 printf("introdusca la calificacion 5"); 
 scanf("%f",&cal5);

 pro = (cal1+cal2+cal3+cal4+cal5)/5;
 
 printf("registro de numero %d",reg);
  printf("El promedio es %.2f",pro);
getch();
 return 0;	
 
 }
