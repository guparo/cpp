#include <stdio.h>
int main(){
int n,fila,col;
printf("tamaño de la piramide: ");
scanf("%d",&n);

for(fila=1;fila<=n;fila++){
/* Espacios en blanco*/
for(col=1;col<=n-fila;col++){
printf(" ");
}
for(col=1;col<=2*fila-1;col++){
printf("*");
}
printf("\n");
}
}
