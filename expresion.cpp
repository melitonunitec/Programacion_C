#include<stdio.h>
#include<math.h>
//Diseñe un algoritmo tal que dado los enteros A y B calcule y escriba el resultado
//valores de a y b = 2,3; 7,8
main(){
int a,b;
double res;
printf("teclea el valor de a, b\n");
scanf("%d", &a);
scanf("%d", &b);
res=a+b;
res= pow (res,2);//pow->potencia
res= res/ (3*b);
printf("%f",res);

return 0;//espera	
}
