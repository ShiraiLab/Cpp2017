/*

応用プログラミングA 第11回演習 関数オーバーロード
問題４：演算子オーバーロード，複素数(complex)

*/

#include <iostream>
using namespace std;

class Complex {
	double real; //実数部
	double imag; //虚数部
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