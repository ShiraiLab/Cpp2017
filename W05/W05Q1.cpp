/* 応用プログラミングA オンライン講義録 → http://bit.ly/kcpp2017
第5回 クラスの概要(2) 問題1(必須) 仮引数を受け取るコンストラクタ
第3回演習で作成した三角形を表すクラス Triangle に、仮引数として 3 辺の長さを受け取るコンスト
ラクタを追加する。また、3 辺の長さから面積を計算して戻り値として返すメンバ関数 area()を追加する。
このクラスをテストするために、以下の例のような main()関数で三角形の 3 辺の長さと面積を出力せよ。
3 辺の長さはコンソールから入力せず、プログラム中で直接設定する。
*/
//以下，第3回課題3より Triangleクラスを引用...
#include <iostream>
#include<math.h>
using namespace std;
#pragma region ここからクラス宣言
class Triangle {
	double a, b, c;
public:
//＜ここに仮引数を受け取るコンストラクタを作ってください＞
	Triangle(double u, double v, double w);
	void set_a(double x);
	void set_b(double x);
	void set_c(double x);
	double get_a();
	double get_b();
	double get_c();
	double area();
}; //ここがクラス宣言の終わり，以下は実装パート．
#pragma endregion
#pragma region メソッドの実装
//コンストラクタの実装
Triangle::Triangle(double u, double v, double w) {
	a = u; b = v; c = w;
}
void Triangle::set_a(double x) { a = x; }
void Triangle::set_b(double x) { b = x; }
void Triangle::set_c(double x) { c = x; }
double Triangle::get_a() { return a; }
double Triangle::get_b() { return b; }
double Triangle::get_c() { return c; }
double Triangle::area() {
	double s; //a,b,cは宣言しなくても利用できることに注目
	s = (a + b + c) / 2;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}
#pragma endregion
//第5回課題1としてはこのmainを Triangle(5,12,13)として面積=30となるようにしてください
int main() {
	Triangle obj(5.0f, 12.0f, 13.0f); //fで終わる数はfloat/doubleを明示している
	cout << "辺a = " << obj.get_a() << endl;
	cout << "辺b = " << obj.get_b() << endl;
	cout << "辺c = " << obj.get_c() << endl;
	cout << "面積 = " << obj.area() << endl;
	return 0;
}