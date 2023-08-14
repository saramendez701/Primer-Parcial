#include <iostream>
using namespace std;
// Parte3
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
   
}
