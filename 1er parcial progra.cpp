#include <iostream>
using namespace std;
// Parte 1 Juan Pzblo
void insercion(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
int busquedaLineal(int arr[], int tamanio, int valorBuscado) {
	for (int i = 0; i < tamanio; i++) {
		if (arr[i] == valorBuscado) {
			return i; // Se encontró el valor, devuelve el índice
		}
	}
	return -1; // No se encontró el valor
}
// Fin parte 1
// Parte 2 Diego Julian 
void insercion1(string arr[], int n) {
    for (int i = 1; i < n; i++) {
        string key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int busquedaBinaria(int arreglo[], int inicio, int fin, int valorBuscado) {
    if (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        if (arreglo[medio] == valorBuscado) {
            return medio; // Se encontró el valor, devuelve el índice
        }
        if (arreglo[medio] > valorBuscado) {
            return busquedaBinaria(arreglo, inicio, medio - 1,
                valorBuscado); // Buscar en la mitad inferior
        }
        return busquedaBinaria(arreglo, medio + 1, fin, valorBuscado); //Buscar en la mitad superior
    }
    return -1; // No se encontró el valor
}
// Fin de parte 2
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
	// Parte 1 Juan Pablo
	int numero[10];
	string cadena[10];
	int arr[10];


	cout << "Ingrese todos los numeros que desee ordenar:" << endl;
	for (int i=0; i<10; i++)
	{
		cin >> arr[i];

	}
	insercion(arr, 10);
	cout << "La forma ordenada es:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] <<",";
	}
	return main();

	system("pause");
		int numero[10];
	string cadena[10];
	int arr[10];
	cout << "Ingrese todos los numeros que desee ordenar:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];

	}
	int tamanio = sizeof(arr) / sizeof(arr[0]);
	
	int valor;
	cout << "Ingrese el numero que desee encontrar" << endl;
	cin >> valor;
	int resultado = busquedaLineal(arr, tamanio, valor);
	if (resultado != -1) {
		cout << "El valor " << valor << " se encuentra en el índice " <<
			resultado << endl;
	}
	else {
		cout << "El valor " << valor << " no se encuentra en el arreglo"
			<<endl;
	}
	// Fin parte 1
   // Parte 2 Diego Cifuentes
	// Ordenamiento 
	int cadena[10];
    int numero_escoger = 0;
    cout << "Ingrese 10 palabras sin espacios" << endl;
    for (int lista = 0; lista < 10; lista++)
    {
        cin >> cadena[lista];
    }
    int n = sizeof(cadena) / sizeof(cadena[0]);
    insercion(cadena, n);
    cout << "datos ordenados \n";
    for (int i = 0; i < n; i++)
        cout << cadena[i] << " ";
    cout << endl;
    cout << "De los datos ingresados, cual quiere escoger?" << endl; // ingrese unos de los numeros ya ingresados
    cin >> numero_escoger;
    int valor = numero_escoger;
    int resultado = busquedaBinaria(cadena, 0, n - 1, valor);
    if (resultado != -1) {
        cout << "El valor " << valor << " se encuentra en el indice " <<
            resultado << endl;
    }
    else {
        cout << "El valor " << valor << " no se encuentra en el arreglo" <<
            endl;
    }
	// Busqueda
	 string cadena[10];
    cout << "Ingrese 10 palabras sin espacios" << endl;
    for (int lista = 0; lista < 10; lista++)
    {
        cin >> cadena[lista];
    }
    int n = sizeof(cadena) / sizeof(cadena[0]);
    insercion1(cadena, n);
    cout << "datos ordenados \n";
    for (int i = 0; i < n; i++)
        cout << cadena[i] << " ";
    cout << endl;
   // Fin de parte 2 
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
