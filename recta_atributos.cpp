#include <iostream>

using namespace std;

int main()
 {  double a,b,c,d,m;
    cout<<"Digite dos puntos P=(a,b) y Q(c,d):"<<endl<<endl;
    cout<<"a : "; cin>>a; cout<<"b : "; cin>>b;
    cout<<"c : "; cin>>c; cout<<"d : "; cin>>d;
    cout<<endl;
    if (b!=d)
    {     m = (a-c)/(b-d);
          if (m>0)
          {cout<<"La recta determinada por estos dos puntos P=("<<a<<","<<b<<") y Q("<<c<<","<<d<<") es Creciente"<<endl;}
          else
          {cout<<"La recta determinada por estos dos puntos P=("<<a<<","<<b<<") y Q("<<c<<","<<d<<") es Decreciente"<<endl;}
          if (m==0)
          {cout<<"La recta determinada por estos dos puntos P=("<<a<<","<<b<<") y Q("<<c<<","<<d<<") es Horizontal"<<endl;}
    }
    else
    {   if(a!=c)
        {cout<<"La recta determinada por estos dos puntos P=("<<a<<","<<b<<") y Q("<<c<<","<<d<<") es Vertical"<<endl;}
        else
        {cout <<"Lo sentimos!. Por un mismo punto pasan infinitas rectas..."<<endl;}
    }
    cin.get(); /*Recuerda que esta linea es por si usas Windows*/
    cin.get();
    return 0;
 }
