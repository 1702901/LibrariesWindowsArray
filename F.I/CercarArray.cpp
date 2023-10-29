#include <iostream>
#include "functions.h"
using namespace std;




float minimVectorPosition(float vector[], int tamany) {

	float min = vector[0];
	float position = 0;
	for (int i = 0; i < tamany; i++)
	{
		if (min > vector[i]) {
			min = vector[i];
			position = float(i);
		}
	}


	return position;
}


float maximVectorPosition(float vector[], int tamany) {

	float max = vector[0];
	float position = 0;
	for (int i = 0; i < tamany; i++)
	{
		if (max < vector[i]) {
			max = vector[i];
			position = float(i);
		}
	}


	return position;
}

int maximVectorPositionInt(int vector[], int tamany) {

	int max = vector[0];
	int position = 0;
	for (int i = 0; i < tamany; i++)
	{
		if (max < vector[i]) {
			max = vector[i];
			position = float(i);
		}
	}


	return position;
}

int NumElementSuperiorsIgualsA(float vector[], int tamany, float minim) {

	int elementsSuperiorsIguals = 0;

	for (int i = 0; i < tamany; i++)
	{

		if (vector[i] >= minim) {
			++elementsSuperiorsIguals;
		}

	}

	return elementsSuperiorsIguals;
}

int NumElementInferiorsIgualsA(float vector[], int tamany, float minim) {

	int elementsSuperiorsIguals = 0;

	for (int i = 0; i < tamany; i++)
	{

		if (vector[i] >= minim) {
			++elementsSuperiorsIguals;
		}

	}

	return elementsSuperiorsIguals;
}

 

int NumElementSuperiorsIgualsAInt(int vector[], int tamany, int minim) {

	int elementsSuperiorsIguals = 0;

	for (int i = 0; i < tamany; i++)
	{

		if (vector[i] >= minim) {
			++elementsSuperiorsIguals;
		}

	}

	return elementsSuperiorsIguals;
}

int NumElementInferiorsIgualsAInt(int vector[], int tamany, int minim) {

	int elementsSuperiorsIguals = 0;

	for (int i = 0; i < tamany; i++)
	{

		if (vector[i] >= minim) {
			++elementsSuperiorsIguals;
		}

	}

	return elementsSuperiorsIguals;
}

void elementSuperiorInferiorAlaMitjana(float vector1[], int tam){

	float mitjana = mitjanaArray(vector1,tam);

	for (int i = 0; i < tam; i++)
	{
		if (mitjana> vector1[i]) {cout << "\nEl mes " << i+1 << " ha tingut temperatura inferior a la mitjana anual";}
		else {
			if(mitjana < vector1[i]){ cout << "\nEl mes " << i+1 << " ha tingut temperatura superior a la mitjana anual"; }
			else{ cout << "\nEl mes " << i+1 << " ha tingut temperatura igual a la mitjana anual"; }
		}
	}


}

int esguardatenOrdreCreixentFins(float vector1[], int tam) {
	int i = 0;
	int valorAnterior = vector1[0];
	int pos;
	while (i<tam-1)
	{
		
		if (vector1[i+1] <  vector1[i]) {
			pos = i;
			i = tam;

		}
		else {
			++i;
		}
	}
	if (i == tam) {
		return pos;
	}
	else {
		return i;
	}
}