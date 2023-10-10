/*
 * Deuda.h
 *
 *  Created on: 10/10/2023
 *      Author: algo2
 */

#ifndef DEUDA_H_
#define DEUDA_H_
#include "Pago.h"
#include "Vector.h"
class Deuda {
private:
	double importe;
	Vector<Pago*> pagos;
	int cuota;
	/*
	 * pre:
	 * pos: arroja un error si el importe no es un importe valido
	 */
	void validarIngreso(double importe);

public:
	/*
	 * pre: se le ingresa un importe mayor a 0 como parametro
	 * pos: crea el TDA deuda
	 */
	Deuda(double importe, int cuotas);
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
	 * pos: incluye un pago nuevo a la Deuda
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
	double calcularPagosPromedio();
};

#endif /* DEUDA_H_ */
