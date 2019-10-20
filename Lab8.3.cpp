#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c, r, s;
	cin >> a >> b >> c;
	s = abs(a - b);
	r = abs(a - c);
	if (s < r) {
		cout << "Точка В ближе расположена к точке А." << "На расстоянии = " << s;
	}
	else
		if (r < s) {
			cout << "Точка С ближе расположена к точке А." << "на расстоянии = " << r;
		}
		else
			if (s = r) {
				cout << "Точки равноудалены от точки А";
			}
	return 0;
}