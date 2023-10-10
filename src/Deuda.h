/*
 * Deuda.h
 *
 *  Created on: 10/10/2023
 *      Author: algo2
 */

#ifndef DEUDA_H_
#define DEUDA_H_

class Deuda {
private:
	double importe;
	double importe_pagado;
	int cantidad_de_pagos;
public:
	/*
	 * pre: se le ingresa un importe mayor a 0 como parametro
	 * pos: crea el TDA deuda
	 */
	Deuda();
	/*
	 * pre:
	 * pos: libera la memoria que utilizaba el TDA Deuda
	 */
	virtual ~Deuda();
	/*
	 * pre:
	 * pos: devuelve el importe que todavia no está pago
	 */
	double obtenerSaldo();
	/*
	 * pre: el pago ingresado es mayor a 0 y menor al importe de la deuda
	 * pos: modifica los atributos de la deuda
	 */
	void pagar(double pago);
	/*
	 * pre:
	 * pos: devuelve la cantidad de pagos que tiene registrados la deuda
	 */
	int contarPagos();
	/*
	 * pre:
	 * pos: devuelve un promedio de los pagos realizados a esta deuda
	 */
	int calcularPagosPromedio();
};

#endif /* DEUDA_H_ */
