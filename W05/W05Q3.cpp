/* 応用プログラミングA 第5回演習問題 クラスの概要(2)
　問題3：オブジェクトポインタ
 */
#include <iostream>
using namespace std;
class area_cl2 {
	double height, width;
public:
	void set_h(double h);
	void set_w(double w);
	double get_h();
	double get_w();
};
//長方形クラスは area_cl2クラスを継承している
//「:」コロンをつかって継承元を指定
class rectangle : public area_cl2 {
public:
	rectangle(double h, double w); //コンストラクタ，高さと幅を指定
	double area();
};
//二等辺三角形クラスも area_cl2クラスを継承している
class isosceles : public area_cl2 {
public:
	isosceles(double h, double w); //コンストラクタ，高さと幅を指定
	double area();
};
//以下，実装
void area_cl2::set_h(double h) { height = h; }
void area_cl2::set_w(double w) { width = w; }
double area_cl2::get_h() { return height; }
double area_cl2::get_w() { return width; }

//2つのクラスのコンストラクタ(処理としては同じ)
rectangle::rectangle(double h, double w) {
	set_h(h); set_w(w);
}
isosceles::isosceles(double h, double w) {
	set_h(h); set_w(w);
}

//2つのクラスの面積を求める関数たち（処理異なる）
//四角形の面積は 高さ×幅
double rectangle::area() { return get_h() * get_w(); }
//二等辺三角形の面積は 高さ×幅÷2
double isosceles::area() { return 0.5f * get_h() * get_w(); }

//今回はmain内の改造だけで片付くはずです
int main() {
	rectangle b(10.0, 5.0); //rectangle="直方体，四角"という意味
	isosceles i(4.0, 6.0); //isosceles="2等辺"という意味
//操作用のポインタ型オブジェクトを宣言
	rectangle *pb; //慣習的にポインタ型はpで始まる変数名を
	isosceles *pi; //つけることが多い
//ポインタ渡し！
	pb = &b; pi = &i; //デバッガで中身を見てみよう！

//直方体と三角形の高さ，幅，面積を表示する 結果表示部
	cout << "長方形の 高さ: " << pb->get_h() << " 幅:" << pb->get_w();
	cout << " 面積= " << pb->area() << "\n";
	cout << "二等辺三角形の 高さ: " << pi->get_h() << " 幅:" << pi->get_w();
	cout << " 面積= " << pi->area() << "\n";
	return 0;
}