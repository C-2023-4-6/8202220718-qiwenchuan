#include <cmath>
bool is_vaild(double side1, double side2, double side3) {
	if (side1 + side2 >side3&& side2 + side3 > side1 && side1 + side3 > side2) {
		return true;
	}
	else {
		return false;
	}
}
double area(double side1, double side2, double side3) {
	double area,s;
	s = (side1 + side2 + side3) / 2;
	area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return area;
}