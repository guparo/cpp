/*Calcula el area de un triangulo conociendo sus tres lados*/
#include <iostream>
#include <conio.h>
#include <math.h> /Reconoce la raiz "sqrt"
using namespace std;
main()
{
float a,b,c; /*Se define el tipo de
dato_entrada*/
float p,at; /*Se define el tipo de
dato_salida*/
cout<<"Ingrese el valor del lado a: ";
cin>>a;
cout<<"Ingrese el valor del lado b: ";cin>>b;
cout<<"Ingrese el valor del lado c: ";cin>>c;
p=(a+b+c)/2.0;
at=sqrt(p*(p-a)*(p-b)*(p-c));
cout<<at;
return 0;
}
/* otra forma:
cout<<"El area del triangulo de "<<a<<", "<<b<<", "<<c<<" es:
"<<at;
getch();
*/
