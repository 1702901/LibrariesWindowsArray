#include <iostream>
using namespace std;

void sumarVectors(int vector1[], int vector2[], int vectorOnguardarSuma[], int tamanyArray) {

	for (int i = 0; i < tamanyArray; i++)
	{
		vectorOnguardarSuma[i] = vector1[i] + vector2[i];
	}
}

float mitjanaArray(float vector1[], int tam) {
	float sumaTotal=0;
	for (int i = 0; i < tam; i++)
	{
		sumaTotal += vector1[i];
	}

	return float(sumaTotal) / tam;
}
float mitjanaArrayInt(int vector1[], int tam) {
	int sumaTotal = 0;
	for (int i = 0; i < tam; i++)
	{
		sumaTotal += vector1[i];
	}

	return float(sumaTotal) / tam;
}