/*
 * Pago.h
 *
 *  Created on: 10/10/2023
 *      Author: algo2
 */

#ifndef PAGO_H_
#define PAGO_H_

class Pago {
private:
	double monto;
public:
	/*
	 * pre:	el pago ingresado es mayor a 0
	 * pos: se crea un objeto pago con el monto ingresado
	 */
	Pago(double pago);
	/*
	 * pre:
	 * pos: se destruye el objeto Pago
	 */
	virtual ~Pago();
	/*
	 * pre:
	 * pos: devuelve el monto del Pago
	 */
	double getMonto();
};

#endif /* PAGO_H_ */
