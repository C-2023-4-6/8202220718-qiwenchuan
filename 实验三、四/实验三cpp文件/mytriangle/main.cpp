#include <iostream>
#include "mytriangle.h"
using namespace std;
int main() {
	cout << "请输入三角形的三条边:";
	int side1, side2,side3;
	cin >> side1 >> side2 >> side3;
	if (is_vaild(side1, side2, side3)) {
		cout << "面积为:" << area(side1, side2, side3) << "\n";
	}
	else {
		cout << "三条边无法构成三角形。" << "\n";
	}
	return 0;
}