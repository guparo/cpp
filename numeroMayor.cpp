#include <stdio.h>
int main(){
double x,y;

printf("Escribe el primer n�mero");
scanf("%lf",&x);
printf("Escribe el segundo n�mero");
scanf("%lf",&y);

if(x>y) printf("El mayor es %f",x);
else if(y>x) printf("El mayor es %f",y);
else printf("Son iguales");
}
