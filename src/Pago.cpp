/*
 * Pago.cpp
 *
 *  Created on: 10/10/2023
 *      Author: algo2
 */

#include "Pago.h"

Pago::Pago(double pago) {
	this->monto = pago;
}

Pago::~Pago() {
}

double Pago::getPago(){
	return this->monto;
}

