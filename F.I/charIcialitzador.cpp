#include <iostream>
using namespace std;

void declararUnChar(char string[],char caracterFinal, int tamany) {
	
	int i = 0;
	char caracter;
	while (tamany>i) {
		++i;
		cin >> caracter;
		if (caracter == caracterFinal) {
			string[i] = caracter;
			i = tamany;
		}
		else {
			string[i] = caracter;
		}

	}
}

void mostrarSting(char string[], char caracterFinal, int tamany,char espai) {
	int i = 0;
	char caracter;
	while (tamany > i) {
		++i;
		if (espai == string[i]) {
			cout << " ";
		}
		else {
			if (string[i] == caracterFinal) {

				i = tamany;
			}
			else {
				cout << string[i];
			}
		}
		

	}

	cout << endl;


}

