#include<iostream>
using namespace std;

//Takes a user input of 1 number and prints all of the factors.
int main() {
	int n, i;
	//Take user input
	cout << "Enter an integer: ";
	cin >> n;
	cout << "Factors of " << n << " are: "<< endl;

	//Print factors
	for (i = 1;i <= n;i++) {
		if (n%i == 0) {
			cout << i << " ";
		}
	}

	cout << endl;
	return 0;
}