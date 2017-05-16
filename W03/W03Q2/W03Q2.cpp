/*
応用プログラミングA 第3回　演習問題　学籍番号 1234567 Akihiko SHIRAI
問題2 クラスの基本
教科書p.19 例1.5 にメンバ変数と
アクセッサ(accessor)関数を追加する
*/
#include <iostream>
using namespace std;

class myclass {
	//非公開(private)メンバ変数
	int a; 	int b;
public:
	void set_a(int num);
	void set_b(int num);
	int get_a();
	int get_b();
};
void myclass::set_a(int num) {
	a = num;
}
void myclass::set_b(int num)
{
	b = num;
}
int myclass::get_a() {	return a;}
int myclass::get_b() {	return b;}

int main() {
	myclass ob1;
	ob1.set_a(10);
	ob1.set_b(99);
	cout << ob1.get_a() << endl;
	cout << ob1.get_b() << endl;
	return 0;
}