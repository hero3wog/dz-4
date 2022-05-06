#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	double n, m;
	double a = 4.8;
	double b = -7.9;
	if (a >= b) {
		n = pow(a - b, 1.0 / 3);
	}
	else {
		n = (a * a) + ((a - b) / sin(a * b));

	}
	if (n < b) {
		m = ((n + a) / (-b) + sqrt(sin(a) * sin(a) - cos(n)));


	}
	else if (n == b) {
		m = b * b + tan(n * a);
	}
	else {
		m = pow(b, 3) + n * a * a;
	}
	cout << a << " " << b << " " << n << " " << m;
}