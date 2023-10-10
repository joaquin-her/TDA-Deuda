/*
 * main.cpp
 *
 *  Created on: 10/10/2023
 *      Author: algo2
 */

#include "Deuda.h"
#include <iostream>
using namespace std;
int main() {
	Deuda* deuda1 = new Deuda(1200.0, 6);
	cout << deuda1->obtenerSaldo();
	delete deuda1;
}



