#include <iostream>
using namespace std;
// Parte3 Sara Mendez
void ordenamiento(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min_idx = i;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}
		// Intercambia el elemento mínimo encontrado comn el primer elemento no ordenado 
		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;

	}
}
int busquedaL(int arreglo[], int tamanio, int valorBuscado) {
	int contador = 1; 
	for (int i = 0; i < tamanio; i++) {
		if (arreglo[i] == valorBuscado) {
			contador++; 
			return contador; 
		}
	}
	return -1; // No se encontró el valor
}
int busquedaL2(string arreglo[], int tamanio, string valorBuscado) {
	int contador = 1;
	for (int i = 0; i < tamanio; i++) {
		if (arreglo[i] == valorBuscado) {
			contador++;
			return contador;
		}
	}
	return -1; // No se encontró el valor
}
int main()
{
   //Parte 3 Sara Mendez 
	int numero[10];
	string cadena[10];
	int opcion; 

	cout << " Ingrese el arreglo al que desea ingresar: " << endl; 
	cout << " 1. Fusion burbuja y seleccion" << endl; 
	cout << " 2. Busqueda con contador " << endl; cin >> opcion; 
	switch (opcion)
	{
	case 1: 
	{
		cout << " Ingrese 10 valores enteros" << endl; 
		int numero[10] = { 1, 5, 35, 642, 64, 643, 7, 2, 5, 3 };

		for (int i = 0; i < 10; i++)
		{
			cin >> numero[i];
		}
		ordenamiento(numero, 10); 
		for (int i = 0; i < 10; i++)
		{
			cout << numero[i] << ", ";
		}
	}
		break; 
	case 2:
	{
		int menu; 
		cout << " 1. Arreglo numerico" << endl; 
		cout << " 2. Arreglo de cadena" << endl; 
		cin >> menu; 
		switch (menu)
		{
		case 1: 
		{
			int numero[10];
			int busqueda = 0;
			cout << " ingrese los numeros que desea guardar en el arreglo" << endl; 
			for (int i = 0; i < 10; i++)
			{
				cin >> numero[i];
			}
			cout << " Ingrese el valor que desea buscar" << endl; cin >> busqueda;
			int contador;
			contador = busquedaL(numero, 10, busqueda);
			if (contador != -1)
			{
				cout << " El valor " << busqueda << " se repite " << contador << " veces." << endl;
			}
			else
			{
				cout << " El valor " << busqueda << " no se ha encontrado en el arreglo" << endl;
			}
		}break;
		case 2: 
		{
			string cadena[10];
			string busqueda = 0;
			cout << " ingrese los numeros que desea guardar en el arreglo" << endl;
			for (int i = 0; i < 10; i++)
			{
				cin >> cadena[i];
			}
			cout << " Ingrese el valor que desea buscar" << endl; cin >> busqueda;
			int contador;
			contador = busquedaL2(cadena, 10, busqueda);
			if (contador != -1)
			{
				cout << " El valor " << busqueda << " se repite " << contador << " veces." << endl;
			}
			else
			{
				cout << " El valor " << busqueda << " no se ha encontrado en el arreglo" << endl;
			}
		}break; 
		}
	}
		break;
	}
}
