/**
//edward va a la tienda de autoservicio y pierde el ticket.
Alondra quiere saber cuanto gasto.
el algoritmo o la logica seria la siguiete.
inicio
art=1;  total=0;
mientras (art==1)// exite
lee precio
si(precio==0) entoces es el fin del ciclo
art=0;
sino
total=total+precio;
fin si
fin mientras
imprimir el total 
fin
*/

#include<stdio.h>
#include<conio.h>
main(){
int art=1,total=0,precio;
while(art==1)//exite
{
printf("precio \n");
scanf("%d",&precio);
if(precio==0){//fin del ciclo

	art=0;
}
	else{
		total=total+precio;
	}
}
printf("total %d",total);
getch();
}
