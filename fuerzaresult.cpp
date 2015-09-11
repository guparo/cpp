
//fuerzaresult.cpp
/*Calcula la resultante entre dos fuerzas conociendo el angulo */
#include <iostream>
#include <conio.h>
#include <math.h> /*Reconoce el pow(base,exponente)*/
#define A (M_PI)/180.0 /*Se define a "A" como el valor de
conversion*/
using namespace std;
main()
{
float f1,f2,anggrados;
float R,angradian;
cout<<"Ingrese el valor de f1: ";cin>>f1;
cout<<"Ingrese el valor de f2: ";cin>>f2;
cout<<"Ingrese el valor del angulo entre f1 y f2: ";cin>>anggrados;
angradian=anggrados*A;
R=sqrt(pow(f1,2)+pow(f2,2)+2*f1*f2*cos(angradian));
cout<<R;
getch();
}
