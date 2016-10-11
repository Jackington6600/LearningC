#include<iostream>
using namespace std;

void c2f() {
	double c, f;
	cout << "Enter a temp in Celcius: ";
	cin >> c;

	f = c*1.8 + 32;
	cout << c << " degrees Celcius in Fahrenheit is " << f << endl;
}