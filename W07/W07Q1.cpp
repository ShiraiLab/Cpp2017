/*
 応用プログラミングA 第7回 配列
 課題1：フレンド関数
*/
#include<iostream>
#include<cstring> //strcpy()に必要
using namespace std;
class CName; // ここで先にCNameの名前だけ宣言しておく
class Circle {
	double x,y;    double radius;	int r, g, b;
public: 
	void set_xyr(double s, double t, double r)	 {	x = s; y = t; radius = r;	}
	void set_color(int u, int v, int w)			 {		r = u; g = v; b = w;	}
	void show();
	bool isSame(CName col); //CNameのメンバではないので注意
};
class CName {
	char name[50];	int r, g, b;
public:
	CName(char* str, int u, int v, int w);
	char* get_name() { return name; }
	void show();
	//ここにCircleクラスのisSame()をフレンド関数とする
	friend bool Circle::isSame(CName col);
};
void Circle::show() {
	cout << "座標：(" << x << ", " << y << ")\n";
	cout << "半径：(" << radius << "\n";
	cout << "RGB ：(" << r << ", " << g << ", " << b << ")\n";
}
bool Circle::isSame(CName col) {
	//条件は自分で考えること
	if (r == col.r && g == col.g && b == col.b) { //friendを宣言しておかないとr,g,bは参照できない！
		return true;
	}
	else {
		return false;
	}
}
CName::CName(char* str, int u, int v, int w) {
	strcpy(name, str); r = u; g = v; b = w;
}
void CName::show() {
	cout << name << ":(" << r << ", " << g << ", " << b << ")\n";
}


int main() {
	Circle ob;
	CName co1("Red", 255, 0, 0);	CName co2("Green", 0,255, 0);	CName co3("Blue", 0, 0, 255);
	ob.set_xyr(2.0, 3.0, 5.0); 	ob.set_color(255, 0, 0); //出題の結果画面より
	cout << "円の情報を表示\n"; ob.show();
	cout << "色1の情報を表示\n"; co1.show();
	cout << "色2の情報を表示\n"; co2.show();
	cout << "色3の情報を表示\n"; co3.show();
	cout << "この円の色は" << co1.get_name();
	if (ob.isSame(co1)) { cout << "です\n"; }	else { cout << "ではありません\n"; }
	cout << "この円の色は" << co2.get_name();
	if (ob.isSame(co2)) { cout << "です\n"; }	else { cout << "ではありません\n"; }
	cout << "この円の色は" << co3.get_name();
	if (ob.isSame(co3)) { cout << "です\n"; }	else { cout << "ではありません\n"; }
	return 0;
}
