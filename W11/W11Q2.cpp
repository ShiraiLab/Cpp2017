/*

���p�v���O���~���OA ��11�񉉏K �֐��I�[�o�[���[�h
���S�F���Z�q�I�[�o�[���[�h�C���f��(complex)

*/

#include <iostream>
using namespace std;

class Complex {
	double real; //������
	double imag; //������
public:
	Complex(double x = 0, double y = 0) { real = x; imag = y; }
	void show(char *str) {
		cout << str << "(" << real << "," << imag << ")\n";
	}
	Complex operator+(Complex o);
};

int main() {
	Complex a(2.0, 1.2), b(3.2, 5.0);
	Complex c;
	a.show("a = ");
	b.show("b = ");
	c = a + b;
	c.show("a+b =");

	return 0;
}