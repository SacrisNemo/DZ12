#include "compare.h"
int main()
{
	Complex a(10, 10);
	Complex b(11, 9);
	Complex c(12, 10);
	auto arr = new Complex[3];
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	return 0;
}