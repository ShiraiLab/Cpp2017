/*
応用プログラミングA 第3回
問題3 C++のコンソール入出力2
学籍番号 1234567 Akihiko SHIRAI
cinを使って数値を入力して四則演算をする
*/
#include <iostream>
using namespace std;
int main() {
	int a, b; //2つの整数
	cout << "整数を2つ入力してください\n";
// 連続して入力する場合リダイレクトを続けて書けばよい
	cin >> a >> b;
	cout << "和" << a + b << "\n";
	cout << "差" << a - b << "\n";
	cout << "積" << a * b << "\n";
	cout << "商" << a / b << "\n";
	return 0;
}
