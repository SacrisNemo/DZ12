#include "compare.h"

Complex::Complex()
{
	this->re = 0;
	this->im = 0;
}

Complex::Complex(double x, double y)
{
	this->re = x;
	this->im = y;
}

double Complex::mod() const
{
	return (sqrt(this->re * this->re + this->im * this->im));
}


bool operator>(const Complex& left, const Complex& right)
{
	return (left.mod() > right.mod());
}