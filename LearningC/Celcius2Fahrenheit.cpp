#include<iostream>
using namespace std;

//Converts a double in Celcius to Fahrenheit
void c2f() {
	double c, f;

	//Take user input
	cout << "Enter a temp in Celcius: ";
	cin >> c;

	//Calculate
	f = c*1.8 + 32;

	//Print result
	cout << c << " degrees Celcius in Fahrenheit is " << f << endl;
}