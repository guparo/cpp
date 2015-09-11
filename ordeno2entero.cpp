

#include <list>
#include <vector>

using namespace std;

int main ()
{
	list<int> miLista; //Creamos
	list<int>::iterator it;

	for (int i=10; i<=50; i = i+10)
	{
		miLista.push_back(i);
	}
	//Se agrega un 10 20 30 40 50 a la lista

	it = miLista.begin(); //Se estabelce el iterador al comienzo de la lista
	it++; //Movemos el iterador una posición (ahora estamos en 20)

	//Se inserta un 11 en la posición del 10 11 20 30 40 50
	miLista.insert (it,11);

	miLista.insert (it,3,18);
	//En la actual posición del 20 insertamos un 18 tres veces
	//10 11 18 18 18 20 30 40 50


	//Creamos un vector que poseerá dos elementos con valor de 19
	vector<int> myvector (2,19);

	//Insertamos ese vector en la lista, enviando los iteradores del propio vector
	miLista.insert (it,myvector.begin(),myvector.end());

	//10 11 18 18 18 19 19 20 30 40 50


	cout << "Mi lista contiene lo siguiente:";

	for (it=miLista.begin(); it!=miLista.end(); it++)
	{
		cout << ' ' << *it; //Se muestra el valor al cual está aùntando el iterador
	}

	return 0;
}
