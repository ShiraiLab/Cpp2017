/*
応用プログラミングA 第3回　演習問題　学籍番号 1234567 Akihiko SHIRAI
問題4 クラスの基本：3角形クラス
*/
#include <iostream>
#include<math.h>
using namespace std;

class Triangle {
	double a, b, c;
public:
	void set_a(double x);
	void set_b(double x);
	void set_c(double x);
	double get_a();
	double get_b();
	double get_c();
	double areatri();
};
void Triangle::set_a(double x) { a = x; }
void Triangle::set_b(double x) { b = x; }
void Triangle::set_c(double x) { c = x; }
double Triangle::get_a() { return a; }
double Triangle::get_b() { return b; }
double Triangle::get_c() { return c; }
double Triangle::areatri() {
	double s; //a,b,cは宣言しなくても利用できることに注目
	s = (a + b + c) / 2;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}

int main() {
	Triangle obj;
	double a, b, c;
	cout << "3角形の辺の長さを入力してください：";
	cin >> a >> b >> c;
	obj.set_a(a); 
	obj.set_b(b);
	obj.set_c(c);
	cout << "辺a = " << obj.get_a() << endl;
	cout << "辺b = " << obj.get_b() << endl;
	cout << "辺c = " << obj.get_c() << endl;
	cout << "面積 = " << obj.areatri() << endl;
	return 0;
}