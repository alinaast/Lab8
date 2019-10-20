#include <iostream>
using namespace std;
 int main() {
	int a, b;
	cin >> a >> b;
	if (a != b) {
		if (a > b) {
			b = a;
			cout << a << " " << b;
		}
		else
			if (b > a) {
				a = b;
				cout << a << " " << b;
			}
	}
	else
	{
		a = 0;
		b = 0;
		cout << a <<" " << b;
	}
	return 0;
} 