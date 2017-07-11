/*

応用プログラミングA 第11回演習 関数オーバーロード
関数オーバーロードの確認

*/

#include <iostream>
using namespace std;

//２つの値を比較するmax 
double max(double a, double b) {
	return a > b ? a : b; // 条件演算子，使いこなしましょう！
}

//３つの値を比較するmax
double max(double a, double b, double c) {
	double max;
	max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	return max;
}

int main() {
	double a = -1.1, b = 0.3, c = 4.5;
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "c = " << c << "\n";

	cout << "max(a,b) = " << max(a, b) << "\n";
	cout << "max(b,a) = " << max(b, a) << "\n";
	cout << "max(a,b,c) = " << max(a,b,c) << "\n";
	//以下略
	return 0;
}