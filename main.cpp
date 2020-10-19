// main.cpp 
// Степанчук Сергій
// Лабораторна робота № 3.1 
// Розгалуження, задане формулою: функція однієї змінної. 
// Варіант 20
#include <iostream>

using namespace std;

int main() {
	double x; // input
	double y; // result

	double m, r; // addtional

	cout << "x = ?" << endl;
	cin >> x;

	m = tan(x) + 1;

	// firts method
	
	if (x <= -5)
		r = exp(x / (int)(1 - x));
	if (x > -5 && x <= 3)
		r = 3.2 + log10(1.8 * x * x);
	if (x > 3)
		r = abs(x) * sqrt(x);

	y = m - r;

	cout << "1. " << y << endl;

	// second method

	if (x <= -5)
		r = exp(x / (int)(1 - x));
	else if (x <= 3)
		r = 3.2 + log10(1.8 * x * x);
	else
		r = abs(x) * sqrt(x);

	y = m - r;

	cout << "2. " << y << endl;

	return 0;
}