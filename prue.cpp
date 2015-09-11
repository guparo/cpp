// ALGORITMO DE ORDENAMIENTO BURBUJA

// Creador por Joseph, 15 de mayo de 2010; licencia GNU
// increiblecrean.blogspot.com

#include <iostream>
using namespace std;

int main()
{
	//DATOS

	//establecer array a ordenar
	int lista[6] = {1, 9, 3, 10, -6, 0};

	//obtener tamaño array
	int tamanyo = sizeof(lista)/sizeof(int);

	// Variables temporales
	int temp, a = 0;

	//MOSTRAR ARRAY ORIGINAL
	cout << "Este es el array original:" <<endl;
	for (int n = 0; n < tamanyo; n++)
		cout << lista[n] << ", ";
	cout << endl << endl;


	//ORDENAMIENTO
	for (int limite = tamanyo - 1; limite >= 0;limite--)
	{
		while (a < limite)
			{
				/* Se puede cambiar el signo (> ó <)
				para ordenar de menor a mayor o viseversa */
				if (lista[a] < lista[a + 1])
				{
					temp = lista[a];
					lista[a] = lista[a + 1];
					lista[a + 1] = temp;
				}
				a++;
			}
			a = 0;
	}

	//MOSTRAR ARRAY MODIFICADO
	cout << "Este es el array ordenado:" <<endl;
	for (int n = 0; n < tamanyo; n++)
		cout << lista[n] << ", ";

	return 0;
}
