//while 
//divisor de un nunmero
#include <stdio.h>
main(){
	int n;
	int divisor;
	printf("introduzca un numero:");
	scanf("%d",&n);
	printf("los divisiones del numero son:\n");
	divisor=n;
	while(divisor>0)
	{
		if((n%divisor)==0)
		printf("%d\n", divisor);
		divisor--;
	}
	return 0;
}
