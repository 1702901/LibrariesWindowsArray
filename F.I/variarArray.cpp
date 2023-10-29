#include <iostream>
using namespace std;

void subtituirNegatiusPer0(int vector[],int tamany) {

	for (int i = 0; i < tamany; i++)
	{
		if (vector[i] < 0) {
			vector[i] = 0;
		}
	}

}
 