#include <iostream>
using namespace std;
#include "constants.h"

// El valor sera del array sera de 0 1 2 3 4 5 ...
void InicialitzacioDeForLlista(int vector[], int tamany) {
	for (int i = 0; i < tamany; i++)
	{
		vector[i] = i;
	}
}
// El valor sera del array sera de 0 1 2 3 4 5 ...
void InicialitzacioDeForLlistaDobleDelIndex(int vector[], int tamany) {
	for (int i = 0; i < tamany; i++)
	{
		vector[i] = i*2;
	}
}


// La matriu tindra el mateix valor a tots els elemts

void InicialitzacioVectorSameNumber(int vector[], int valor, int nelements) {
	for (int i = 0; i < nelements; i++)
	{
		vector[i] = valor;
	}
}

void InicialitzacioVectorManual(float vector[], int tamanyVector) {
	float num;
	for (int i = 0; i < tamanyVector; i++)
	{
		cin >> num;
		vector[i] = num;
	}
}
void InicialitzacioVectorManualInt(int vector[], int tamanyVector) {
	int num;
	for (int i = 0; i < tamanyVector; i++)
	{
		cin >> num;
		vector[i] = num;
	}
}


// Inicialitzacio dins un rang entre un min i un max

void InicialitzacioRang(int vector[], int tamanyVector, int minim, int maxim) {
	int num;
	for (int i = 0; i < tamanyVector; i++)
	{
		cin >> num;
		while (num > maxim || num < minim) {
			cout << "\nError: Valor no valid\n";
			cin >> num;
		}
		vector[i] = num;

	}
}

void inicialitzarManualmentUnArrayMultidimensional(float arrayMulti[][numero_columnes], int filas, int columnes) {
	int num;
	for (int fila = 0; fila < filas; fila++)
	{
		cout << "Estas a la fila " << fila << endl;
		for (int columna = 0; columna < columnes; columna++)
		{
			cout << "Introueix element " << columna << endl;
			cin >> num;
			arrayMulti[fila][columna] = num;
		}
	}
}