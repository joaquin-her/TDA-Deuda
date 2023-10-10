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
	cout <<"\nSaldo:"<< deuda1->obtenerSaldo();

	deuda1->pagar(200.0);
	cout <<"\nSaldo:"<< deuda1->obtenerSaldo();
	deuda1->pagar(200.0);
	deuda1->pagar(300.0);
	cout <<"\nSaldo:"<< deuda1->obtenerSaldo();
	cout <<"\nCantidad de pagos:"<< deuda1->contarPagos();
	cout <<"\nPromedio de pagos:"<< deuda1->calcularPagosPromedio();
	delete deuda1;
}



