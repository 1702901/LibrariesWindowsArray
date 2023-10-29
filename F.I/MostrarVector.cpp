#include <iostream>
using namespace std;
#include "constants.h"
#include <stdlib.h>
#include <time.h>
#include <ctime> 

void mostrarVector(int vector[], int tamany) {

	cout << "\nEl vector es : ";
	for (int i = 0; i < tamany; i++)
	{
		cout << vector[i] << " ";
	}

	cout << endl;
}

void mostrarVectorAmbNom(int vector[], int tamany, char nom) {

	cout << "\nVector " << nom << " :";
	for (int i = 0; i < tamany; i++)
	{
		cout << vector[i] << " ";
	}

	cout << endl;
}



template <typename vector>
decltype(auto) mostrarArray(vector vector1[], int lengh) {

	cout << endl;
	cout << "El vector conte: ";
	for (int i = 0; i < lengh; i++)
	{
		cout << vector1[i] << " ";
	}


}

 

void MostraRmultidimensionalArray(float arrayMulti[][numero_columnes], int filas, int columnes) {
	
	for (int fila = 0; fila < filas; ++fila)
	{
		for (int columna = 0; columna < filas; ++columna) {
			cout << " " << arrayMulti[fila][columna] << " ";
		}
		cout << endl;
	}

	
}
