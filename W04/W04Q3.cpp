/*
応用プログラミングA 第4回演習 クラスの概要
問題3 仮引数を受け取るコンストラクタ

構築者に引数を渡す！
*/
#include<iostream>
#include <cmath> //math.hのクラス版，sqrt()のために必要
using namespace std;

class Triangle {
	double a, b, c;
public:
	//3辺の値を受け取るコンストラクタ，ここでa,b,cではない仮引数を設定することに注意！
	Triangle(double u, double v, double w);
	//以下，過去の実装から再利用するとよいです
	void set_a(double x); //これらの仮引数はただの名前，x だろうと y, z でも何でもよい
	void set_b(double x);
	void set_c(double x);
	double get_a();  double get_b();	double get_c(); //getters
	double area(); //実装するメソッドは必ずこのクラスの宣言でフォーマット宣言していく
};
//仮引数のスコープ（有効範囲）を意識してみよう
Triangle::Triangle(double u, double v, double w) {
	a = u; b = v; c = w; // private変数に値を受け渡せばこの仮の変数の使命は全うする
} //u,v,wのスコープはここで終了する
//以下，Setter/Getterの実装
void Triangle::set_a(double x) { a = x; }
void Triangle::set_b(double x) { b = x; }
void Triangle::set_c(double x) { c = x; }
double Triangle::get_a() { return a; }
double Triangle::get_b() { return b; }
double Triangle::get_c() { return c; }
//ヘロンの公式による面積導出
double Triangle::area() {
	double s;
	s = (a + b + c) / 2;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}

int main() {
	//コンストラクタの呼び出し時の書式に注意！
	Triangle obj(3.0f, 4.0f, 5.0f);
	// (クラス名) 実オブジェクト名（引数） という呼び方をする．
	// objは クラスの実体（インスタンス）なので Triangle Hoge(1,2,3) でもよい 
	cout << "辺a = " << obj.get_a() << endl;
	cout << "辺b = " << obj.get_b() << endl;
	cout << "辺c = " << obj.get_c() << endl;
	cout << "面積 = " << obj.area() << endl;

	return 0;
}