/*
 * Deuda.cpp
 *
 *  Created on: 10/10/2023
 *      Author: algo2
 */

#include "Deuda.h"
#include "Pago.h"

Deuda::Deuda(double importe, int cuotas) {
	// TODO Auto-generated constructor stub
	validarIngreso(importe);
	this->importe = importe;
	this->pagos = new Vector<Pago*>(cuotas);
	this->cuota = 0;
}

Deuda::~Deuda() {
	// TODO Auto-generated destructor stub
	delete this->pagos;
}
void Deuda::validarIngreso(double monto){
	if (monto < 0){
		throw "El monto inresado no es valido: es negativo";
	}
}

double Deuda::obtenerSaldo(){
	return this->importe;
}

void Deuda::pagar(double pago){
	validarIngreso(pago);
	if (pago<=this->importe){
		this->importe -= pago;
		this->pagos.setDato(this->cuota,new Pago(pago));
		this->cuota += 1;
	}else{
		throw "El pago ingresado es mayor que el importe de la deuda";
	}
}

int Deuda::contarPagos(){
	return this->cuota;
}

double Deuda::calcularPagosPromedio(){
	if (cuota>0){
		double pagos = 0;
		for (int i = 0; i< cuota; i++){
			pagos += this->pagos.getDato(i)->getMonto();
		}
		return pagos/cuota;
	}else{
		return 0;
	}

}
