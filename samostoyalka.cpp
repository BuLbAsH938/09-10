#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	/*1 ������
	int hp;
	cin >> hp;
	cout << (hp > 0) << endl;
	2 ������
	int c;
	cin >> c;
	if (c > 20) {
		cout << "on" << endl;
	}
	else {
		cout << "off" << endl;
	}
	������ 3
	int t, t2, C;
	cin >> t >> t2 >> C;
	if (t2 > t && C <= 80) {
		cout << "on" << endl;
	}
	else {
		cout << "off" << endl;
	} 
	������ 4
	double x, y;
	cin >> x;
	if (x > 0) {
		y = (sqrt)(x - 2);
		cout << y << endl;
	}
	else if (x = 0) {
		y = 0;
		cout << y << endl;

	}
	else {
		y = abs(x);
		cout << y << endl;
	}
	������ 5
	int a;
	cin >> a;
	switch (a) {
	case 1: cout << "�������" << endl; break;
	case 2: cout << "������������" << endl; break;
	case 3: cout << "�������" << endl; break;
	case 4: cout << "����������" << endl; break;
	case 5: cout << "�������" << endl; break;
	default: cout << "������" << endl; break;
	}
	������ 6*/
	//d - ����������� ����
	//y - ����������� �� �����
	int d, y;
	cin >> d >> y;
	if (d > y){
		cout << "open window" << endl;
	}
	else if (d < y && d > 20){
		cout << "ac on" << endl;
	}
	else {
		cout << "ac off" << endl;
	}

}