//Sumoimpares.cpp
//Calcula la suma de inpares hasta un n: 1+3+5+7+...n
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
int n;
int suma,i;
cout<<"Para sumar 1+3+5+7+9+...+n , Ingrese el valor de n: ";cin>>n;
suma=0;
i=1;
while (i<=n)
{suma=suma+2*i-1;
cout<<""<<2*i-1<<" + ";
i=i+1;}
cout<<"\nLa suma total es: "<<suma<<"";
getch();
}
