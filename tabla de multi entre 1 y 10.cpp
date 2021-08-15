//elaborar una tabla de multiplicar entre el 1 y 10
/**locgica/algoritmo
inicio 
leer
para(i=1, i<=10; i incremento de 1)
mult=tabla*i;
imprimir i"*" tabla "=" mult
fin para
fin
*/
#include<stdio.h>
#include<conio.h>
main(){
int tabla,mult,i;	
printf("Ingrese el numero de tabla \n:");
scanf("%d", &tabla);
for(i=1; i<=10; i++){
mult= tabla*i;
printf("%d * %d =%d \n",i,tabla,mult);	
}
getch();	
}

