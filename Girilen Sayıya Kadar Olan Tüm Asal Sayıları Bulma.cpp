#include <iostream>
#include <cmath>
using namespace std;
int main() {
	
	int i, number, j, control = 1;

	cout << "enter a numberr: ";
	cin >> number;

	for (i = 2; i <= number; i++) {
		control = 1;
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				control = 2;
				break;
			}
		}
		if (control == 1) {
			cout << i << " ";
		}
	}


	return 0;
}