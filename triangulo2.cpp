//calcular el perimetro y la superficie del rectangulo.
#include <stdio.h>
#include <conio.h>

main()
{

float base,altu;
float per,sup;
 
 printf("Base\n");
 scanf("%f", &base);
 
 printf("altura\n");
 scanf("%f", &altu);
 
 per= (base+altu)*2;
 sup= base*altu;
 
 printf("% .2f % .2f",per,sup);
 getch();
 getch();
}
 
