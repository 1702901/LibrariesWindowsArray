#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <ctime> 

#include "variarArray.h"
#include "functions.h"
#include "InicialitzarArray.h"
#include "cercarArray.h"
#include "mostrarVector.h"
#include "char.h"
#include "matrix.h"
using namespace std;
#include "constants.h"
#include "temps.h"

int main() {
	unsigned temps;
 
	float vectormulti[numero_filas][numero_columnes];
	RandomMultidimensional(vectormulti, numero_filas,numero_columnes);
	temps1(temps);
	MostraRmultidimensionalArray(vectormulti, numero_filas, numero_columnes);
	temps2(temps);
	 
	 
}