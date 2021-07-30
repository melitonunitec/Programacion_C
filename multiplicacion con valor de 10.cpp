//setencia de entrada y salida
//multiplicacion de numeros enteros a,b,c,d que valen 10

#include <stdio.h>
main(){

//declaremos nuestra variables
int a,b,c,d;
printf("Ingresa los datos a,b,c,d\n:");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
a=a*10;
b=b*10;
c=c*10;
d=d*10;
printf("%d %d %d %d", a,b,c,d);
return 0;//se utiliza para indicar el valor de retorno de una función.
}
