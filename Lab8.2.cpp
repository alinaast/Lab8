#include <iostream>
using namespace std;
int main() {
	double a, b, c, s;
	cin >> a >> b >> c;
	if (a > b) {
		if (b > c) {
			s = a + b;
			cout << s;
		}
		else {
			s = a + c;
			cout << s;
		}
	}
	else {
		s = b + c;
		cout << s;
	}
	return 0;
}
