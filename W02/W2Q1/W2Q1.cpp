/*
応用プログラミングA 第2回
問題1 C++のコンソール出力
学籍番号 1234567 Akihiko SHIRAI
coutを使ってHelloWorldを出力する
*/
#include <iostream>
using namespace std; //これは何のためにあるのか？

int main() {
	//using を使わずスコープ解決演算子「::」を使って解決する例
	//std::cout << "HelloWorld\n";
	std::cout << "HelloWorld\n";
	return 0;
}
