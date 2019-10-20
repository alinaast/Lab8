#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a;
	cin >> a;
	if (a % 2 == 0 && a < 0) {
		cout << "Число является отрицательным четным";
	}
	else
		if (a % 2 != 0 && a < 0) {
			cout << "Число является отрицательным нечетнм";
		}
	if (a % 2 == 0 && a > 0) {
		cout << "Число является положительным четным";
	}
	else
		if (a % 2 != 0 && a > 0) {
			cout << "Число является положительным нечетным";
		}
	if (a == 0) {
		cout << "Число является нулевым";
	}
	return 0;
}
