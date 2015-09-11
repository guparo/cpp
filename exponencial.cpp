//exponencial.cpp
/*Calcula diferentes expresiones para un solo valor*/
#include <iostream>
#include <conio.h>
#include <math.h> /*Reconoce exp(X), se refiere al "e a
la X"*/
using namespace std;
main()
{
float t;
double x,y,z;
cout<<"Ingrese el valor de t: ";cin>>t;
x=pow(t,3)-8*t+4;
y=sin(t)+cos(2*t);
z=exp(3*t+7);
cout<<"El valor de x es: "<<x;
cout<<"\nEl valor de y es: "<<y; /*"\n" se utiliza para
bajar de linea*/
cout<<"\nEL valor de z es: "<<z;
getch();
}
