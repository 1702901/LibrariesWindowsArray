#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "constants.h"
using namespace std;

#include <ctime> 


// Code to execute


// la matriu ha de tenir el mateix numero de filas i de columnes 
int SimetriaMatriu(float m[][numero_columnes], int NUM_filas) {
	

	bool simetria = false;
	int contador = 0;
	int filasContador = 0;
	while (simetria==false&& filasContador <NUM_filas)
	{

		if (m[filasContador][contador] != m[contador][filasContador]) {
			
			simetria = true;
		}
		else {
			++contador;
			if (contador == numero_columnes) {
				
				++filasContador;
				
				contador = filasContador;
			}
		}


	}


	

	return !simetria;
}

void RandomMultidimensional(float arrayMulti[][numero_columnes], int filas, int columnes) {
	srand(time(NULL));
	
	int num;
	for (int fila = 0; fila < filas; fila++)
	{
		 
		for (int columna = 0; columna < columnes; columna++)
		{
			 
			num = 1 + rand() % (11 - 1);
			arrayMulti[fila][columna] = num;
		}
	}
}