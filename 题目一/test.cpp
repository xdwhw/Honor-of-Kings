#include <iostream>
#include "rectangle.h"

using namespace std;

int main() {
	Rectangle R1(4, 40);
	Rectangle R2(3.5, 35.9);

	cout << "R1�����Ϊ��" << R1.getArea() << endl;
	cout << "R1���ܳ�Ϊ��" << R1.getPerimeter() << endl;
	cout << "R2�����Ϊ��" << R2.getArea() << endl;
	cout << "R2���ܳ�Ϊ��" << R2.getPerimeter() << endl;

	return 0;
}