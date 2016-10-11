#include<iostream>
using namespace std;

//Prints the the factors of a given number (cin) to the output (cout)
void factors() {
	int n, i;
	//Take user input
	cout << "Enter an integer to find its factors: ";
	cin >> n;
	cout << "Factors of " << n << " are: " << endl;

	//Print factors
	for (i = 1;i <= n;i++) {
		if (n%i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}