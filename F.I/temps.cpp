#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>
#include <ctime> 
#include "constants.h"
void temps() {
	unsigned t0, t1;

	t0 = clock();
	// the function

	// end function 
	t1 = clock();



	double time = (double(t1 - t0) / CLOCKS_PER_SEC);
	cout << "Execution Time: " << float(time) << endl;
}

void temps1(unsigned &t0) {
	t0 = clock();
}

void temps2(unsigned t0) {
	unsigned t1 = clock();

	double time = (double(t1 - t0) / CLOCKS_PER_SEC);
	cout << "Execution Time: " << float(time) << endl;

}