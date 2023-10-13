#include <iostream>
#include "rectangle.h"

using namespace std;

int main() {
	Rectangle R1(4, 40);
	Rectangle R2(3.5, 35.9);

	cout << "R1的面积为：" << R1.getArea() << endl;
	cout << "R1的周长为：" << R1.getPerimeter() << endl;
	cout << "R2的面积为：" << R2.getArea() << endl;
	cout << "R2的周长为：" << R2.getPerimeter() << endl;

	return 0;
}