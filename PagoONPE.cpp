//PagoONPE.cpp
/*Programa de un trabajador ONPE.
Alumno: Ronald R. Torrejon Noriega. Codigo: 20002045f
Curso: MB543 Secc: I */
#include <iostream>
#include <conio.h>
#include <ctype.h>
using namespace std;
main()
{
int N, NH;
float I1,I2,I3,I4,subtotal,total;
char xy;
for(;;){
I1=0;
I2=0;
I3=0;
I4=0;
system("cls);
gotoxy(15,2);cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
gotoxy(15,3);cout<<"* OFICINA NACIONAL DE PROCESOS ELECTORALES *";
gotoxy(15,4);cout<<"* ======= ======== == =================== *";
gotoxy(15,5);cout<<"* ( ONPE) *";
gotoxy(15,6);cout<<"*";
gotoxy(15,7);cout<<"* Programa para calcular el pago mensual *";
gotoxy(15,8);cout<<"**";
gotoxy(15,9);cout<<"* UNIVERSIDAD NACIONAL DE INGENIERIA *";
gotoxy(15,10);cout<<"* FACULTAD DE INGENIERIA MECANICA *";
gotoxy(15,11);cout<<"**";
gotoxy(15,12);cout<<"* Elaborado por: Ronald R. Torrejon Noriega *";
gotoxy(15,13);cout<<"* Curso: MB543 Secc: I *";
gotoxy(15,14);cout<<"**";
gotoxy(15,15);cout<<"* Fecha: 30 Abril del 2001 *";
gotoxy(15,16);cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" ;
gotoxy(1,18);cout<<"Bienvenido!!! Este programa le ayudara a calcular el pago que recibira";
gotoxy(1,19);cout<<"este mes como trabajador ONPE, porfavor siga las siguientes intrucciones:";
gotoxy(7,22);cout<<"Ingrese su sueldo basico <Por ej: 600> : ";cin>>N;
clrscr();
gotoxy(2,2);cout<<"Gracias... Ahora elija el grado de Instruccion que ostenta:";
gotoxy(2,4);cout<<"<1> Ud. tiene educacion hasta 5 de secundaria.";
gotoxy(2,5);cout<<"<2> Ud. es un Profesional Tecnico.";
gotoxy(2,6);cout<<"<3> Ud. es un Profesional de carrera.";
gotoxy(2,7);cout<<"Opcion: <Pulse 1,2 o 3 y luego presione ENTER> : ";int opc1;cin>>opc1;
switch (opc1)
{
case 1:
{I1=0.05*N;
clrscr();
gotoxy(5,1);cout<<"Ud. tiene un incremento de "<<I1<<" soles";break;}
case 2:
{I1=0.1*N;
clrscr();
gotoxy(5,1);cout<<"Ud. tiene un incremento de "<<I1<<" soles";break;}
case 3:
{I1=0.2*N;
clrscr();
gotoxy(5,1);cout<<"Ud. tiene un incremento de "<<I1<<"soles";break;}
}
gotoxy(2,8);cout<<"Responda la siguientes pregunta:";
gotoxy(2,10);cout<<"Ud. es casado y su edad es menor a 25?. (Responda [S] Si o [N] No): ";
char opc2;cin>>opc2;
opc2=toupper(opc2);
if (opc2=='S')
{I2=0.035*N;
clrscr();
gotoxy(5,1);cout<<"Ud. tiene un incremento de "<<I1<<" soles";
gotoxy(5,2);cout<<"Ud. tiene un incremento de "<<I2<<" soles";}
else
{clrscr();
gotoxy(5,1);cout<<"Ud. tiene un incremento de "<<I1<<" soles";
gotoxy(5,2);cout<<"Ud. tiene un incremento de "<<I2<<"soles";}
gotoxy(2,8);cout<<"Responda la siguientes pregunta:";
gotoxy(2,10);cout<<"Ud. tiene hijos?. (Responda [S] Si o [N] No): ";
char opc3;cin>>opc3;
opc3=toupper(opc3);
if (opc3=='S')
{gotoxy(2,12);cout<<"Cuantos hijos tiene? ";cin>>NH;
I3=0.025*NH*N;
clrscr();
gotoxy(5,1);cout<<"Ud. tiene un incremento de "<<I1<<" soles";
gotoxy(5,2);cout<<"Ud. tiene un incremento de "<<I2<<" soles";
gotoxy(5,3);cout<<"Ud. tiene un incremento de "<<I3<<"soles";}
else
{clrscr();
gotoxy(5,1);cout<<"Ud. tiene un incremento de "<<I1<<" soles";
gotoxy(5,2);cout<<"Ud. tiene un incremento de "<<I2<<" soles";
gotoxy(5,3);cout<<"Ud. tiene un incremento de "<<I3<<"soles";}
gotoxy(2,8);cout<<"Responda la siguientes pregunta:";
gotoxy(2,10);cout<<"Ud. tiene casa propia?. (Responda [S] Si o [N]No)): ";
char opc4;cin>>opc4;
opc4=toupper(opc4);
if (opc4=='N')
{I4=0.05*N;
clrscr();
gotoxy(5,1);cout<<"Ud. tiene un incremento de "<<I1<<" soles";
gotoxy(5,2);cout<<"Ud. tiene un incremento de "<<I2<<" soles";
gotoxy(5,3);cout<<"Ud. tiene un incremento de "<<I3<<" soles";
gotoxy(5,4);cout<<"Ud. tiene un incremento de "<<I4<<" soles";}
else
{clrscr();
gotoxy(5,1);cout<<"Ud. tiene un incremento de "<<I1<<" soles";
gotoxy(5,2);cout<<"Ud. tiene un incremento de "<<I2<<" soles";
gotoxy(5,3);cout<<"Ud. tiene un incremento de "<<I3<<" soles";
gotoxy(5,4);cout<<"Ud. tiene un incremento de "<<I4<<" soles";}
subtotal=N+I1+I2+I3+I4;
if (subtotal>700)
{total=0.9*subtotal;}
else
{total=subtotal;}
gotoxy(5,20);cout<<"Su sueldo para este mes sera de: "<<total<<"Nuevos Soles.";
gotoxy(5,22);cout<<"Que disfrute su sueldo!!!.";
gotoxy(5,25);cout<<"Desea volver a ejecutar el programa?. <Presione<S> Si o <N> No";
xy=toupper(getch());
if(xy=='N')break;}
}
