/*

���p�v���O���~���OA ��12�񉉏K �p���i�Q�j
���1 �h���N���X�̃R���X�g���N�^

*/

#include <iostream>
using namespace std;

class area_c1 {
	double width; double height;
public:
	area_c1(double w, double h) {
		width = w; height = h;
	}
	double getw() { return width; }
	double geth() { return height; }
};

class rectangle : public area_c1 {
	double area;
public: 
	rectangle(double w, double h) : area_c1(w, h) {
		area = w *h;
	}
	double getarea() { return area; }
};
class isosceles : public area_c1 {
	double area;
public:
	isosceles(double w, double h) : area_c1(w, h) {
		area = w * h / 2;
	}
	double getarea() { return area; }
};

int main() {
	rectangle ob1(5.0, 6.0);
	isosceles ob2(7.0, 8.0);
	cout << "�l�p�`�̖ʐ�:" << ob1.getarea() << "\n";
	cout << "�O�p�`�̖ʐ�:" << ob2.getarea() << "\n";
	return 0;
}