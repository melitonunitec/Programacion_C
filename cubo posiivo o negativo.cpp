//calcule el cubo de un numero siempre y cuando sea positivo en caso contrario indicar que es negativo
//math = es un archivo de cabecera de la ..biblioteca est�ndar del lenguaje de programaci�n C dise�ado para operaciones matem�ticas b�sicas
#include <stdio.h>
#include <conio.h>
#include <math.h>
 main(){
 int num;
 double cub;
 printf("numero");
 scanf("%d", &num);
 if(num>0){
 	cub=pow(num,3);
 	printf("%f", cub);
 	
 }
 else{
 	printf("no es positivo");
 }
 getch();
 }
