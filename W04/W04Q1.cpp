/*
応用プログラミングA 第4回演習 クラスの概要
問題1 関数のオーバーロード
なんでも比較できる関数 max()をつくる
*/
#include<iostream>
using namespace std;

//関数のフォーマット，ちなみにこれはクラスとは関係がない！
char	max(char a, char b);		//文字列の比較
int		max(int a, int b);			//整数の比較
double	max(double a, double b);	//実数の比較

int main() {
	//テストデータ各種
	char c1 = 'a', c2 = 'b';
	int i1 = 10, i2 = 20;
	double d1 = 1.01, d2 = 0.99;
	//実行画面
	cout << " [" c1 << "] と [" << c2 << "] を比較して，大きいのは" << max(c1, c2) << "です\n";
	cout << " " << i1 << " と " << i2 << " を比較して，大きいのは" << max(i1, i2) << "です\n";
	cout << " " << d1 << " と " << d2 << " を比較して，大きいのは" << max(d1, d2) << "です\n";
	return 0;
}
//以下の関数の実装はどこに書いてもよい
//文字列の比較
char	max(char a, char b) {
	return a > b ? a : b; //条件演算子（三項演算子）を使うと簡単！
}
//整数の比較
int		max(int a, int b) {
	return a > b ? a : b;
}
//実数の比較
double	max(double a, double b) {
	return a > b ? a : b;
}
