#include <iostream>
#include "mytriangle.h"
using namespace std;
int main() {
	cout << "�����������ε�������:";
	int side1, side2,side3;
	cin >> side1 >> side2 >> side3;
	if (is_vaild(side1, side2, side3)) {
		cout << "���Ϊ:" << area(side1, side2, side3) << "\n";
	}
	else {
		cout << "�������޷����������Ρ�" << "\n";
	}
	return 0;
}