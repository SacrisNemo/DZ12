#ifndef COMPARE_H
#define COMPARE_H

#include <iostream>

class Complex
{
	double re;
	double im;
public:
	Complex();
	Complex(double, double);
	double mod() const;
	friend bool operator>(const Complex& left, const Complex& right);
	Complex& operator=(Complex& right) = default;
};

template <class T1>
void sort_p(T1* a, int size)
{
	T1 temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
template <class T2>
void sortVi(T2 a, int size)
{
	int min = 0;
	T2 temp;
	for (int i = 0; i < size; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
			if (i != min)
			{
				temp = a[j];
				a[j] = a[min];
				a[min] = a[j];
			}
		}
	}
}

template <class T3>
void sortVs(T3 a, int size)
{
	T3 temp;
	for (int i = 1; i < size; i++)
	{
		for (int j = i; j > 0 && a[j - 1] > a[j]; j--)
		{
			temp = a[j - 1];
			a[j - 1] = a[j];
			a[j] = temp;
		}
	}
}
#endif //COMPARE_H
