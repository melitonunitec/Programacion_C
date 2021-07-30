//suma de n numeros 
#include <stdio.h>
main(){
int total;// numero de datos 
double suma;// summa las variables que ingresamos
double n;//numero leido desde el teclado 
int i;	// es un contador que "incremetna de uno en uno +1"
printf("Numero total de datos");
scanf("%d",&total);
suma=0;//Inicializacion de la suma 
i=0;//inicializacion del contador 
//Un contador es una variable cuyo valor que se incrementa o decrementa en una cantidad constante
//suma .Es una variable que como su nombre lo indica, suma sobre sí misma un conjunto de valores, al finalizar.
while (i<total){//while es un bucle quenos permite repetir la ejecución de un grupo de instrucciones mientras se cumpla una condición
printf("dato %d:",i);
scanf("%if",&n);
suma=suma+n;
i++;	
}
printf("suma total=%if\n",suma);
}

