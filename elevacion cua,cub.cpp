#include<stdio.h>
#include<conio.h>
#include<math.h>
 //calcular el cuadrado,el cubo y la quinta potencia de un numero entero
 
 int main(){
 int num;
 double cua, cub, qui;
 
  printf("numero entero\n");
  scanf("%d",&num);
  cua=num*num;
   cub=pow(num, 3);
   qui=pow(num, 5);    
        
 printf("%.2f %.2f %.2f",cua,cub,qui);
 // printf("El promedio es %.2f",pro);

 return 0;	
 
 }
