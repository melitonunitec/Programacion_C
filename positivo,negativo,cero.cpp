//realice un algoritmo que acepte un numero e indique  si es positivo o negativo  o es cero
#include <stdio.h>
#include <conio.h>

main(){
int num;
printf("Numero\n");
scanf("%d", &num);
if(num>0)
{
printf("Es positivo");
}
else
{
if(num==0)
{
	
printf("Es cero");
}
else
{
 printf("Es negativo");	
}
}	
getch();
}
