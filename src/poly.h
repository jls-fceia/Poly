#ifndef POLY_H_
#define POLY_H_

#include <iostream>
#include <vector>

namespace practica4 {

class Polinomio {
public:
	Polinomio();
	virtual ~Polinomio();
	Polinomio(const Polinomio &other);
	Polinomio(int n, double []);

	int getOrden() const;
	double getCoef(int p) const;
	double* calcular(int limite);
	double evaluar(double) const;

	/*
	 * Operadores
	 */

	Polinomio& operator= (const Polinomio& p);
	Polinomio& operator+= (const Polinomio& p);
	bool operator< (const Polinomio& p) const;
	bool operator== (const Polinomio& p);

	std::ostream& operator<< (std::ostream& o);
	friend Polinomio operator- (const Polinomio& p);
  friend Polinomio operator+ (const Polinomio&) const;

private:
	int orden;
	std::vector<double> vcoef;
};

} /* namespace practica4 */

#endif /* POLY_H_ */
