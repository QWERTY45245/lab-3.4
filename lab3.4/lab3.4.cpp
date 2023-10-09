// Lab_03_4.cpp
// < Каражов Роман >
// Лабораторна робота  3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 8
#include <iostream>
using namespace std;
int main()
{
	double R; // вхідний параметр
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if ((y>=(-1 * R) && y <= R &&x>= 0 && x <= R) ||
		(y >= (-1 * R) && y <= R && x==y))
		cout << "yes" << endl;
	else cout << "no" << endl;
	cin.get();
	return 0;
}