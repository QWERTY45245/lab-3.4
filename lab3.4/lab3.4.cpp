// Lab_03_4.cpp
// < ������� ����� >
// ����������� ������  3.4
// ������������, ������ ������� �������.
// ������ 8
#include <iostream>
using namespace std;
int main()
{
	double R; // ������� ��������
	double x; // ������� ��������
	double y; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// ������������ � ����� ����
	if ((y>=(-1 * R) && y <= R &&x>= 0 && x <= R) ||
		(y >= (-1 * R) && y <= R && x==y))
		cout << "yes" << endl;
	else cout << "no" << endl;
	cin.get();
	return 0;
}