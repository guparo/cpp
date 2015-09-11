#include <stdio.h>

int main(){

    int a;
    float b;
    char c;

    printf("De un valor ENTERO para a ==> ");
    scanf("%d", &a);
    printf("El valor de a es ==> %d",a);

    printf("De un valor CARACTER para c ==> ");
    scanf("%c", &c);
    printf("El valor de c es ==> %c",c);

    printf("De un valor FLOTANTE para b ==> ");
    scanf("%f", &b);
    printf("El valor de b es ==> %.2f",b);


    return 0;

}
