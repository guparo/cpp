//Digmenymay.cpp
//calcula la menor y mayor cifra de un numero entero
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
int n,digmenor,digmayor,digito;
digmenor=9;
digmayor=0;
cout<<"Ingrese un numero entero: ";cin>>n;
do {digito=n%10;
cout<<"\n"<<digito<<"";
if (digito<digmenor) {digmenor=digito;}
if (digito>digmayor) {digmayor=digito;}
n=(n-digito)/10;} while (n>0);
cout<<"\nEl digito menor es "<<digmenor<<" y el mayor es"<<digmayor<<"";
getch();
}
