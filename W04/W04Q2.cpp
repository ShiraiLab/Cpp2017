/*
応用プログラミングA 第4回演習 クラスの概要
問題2 コンストラクタとデストラクタ

構築者と破壊者！
*/
#include<iostream>
using namespace std;

//コンストラクタとデストラクタしかない実験用のクラス
class TestClass {
public:
	TestClass();	//これがコンストラクタ
	~TestClass();	//これがデストラクタ，チルダ付き．
};

TestClass::TestClass() {
	cout << "我は創造者なり！\n";
}

TestClass::~TestClass() {
	cout << "我は破壊者なり！\n";

}
int main() {
	TestClass ob;
	cout << "こちらはmain()ですぅ\n";
	return 0;
	//このreturn 0直前までデストラクタは呼ばれません．
	//デバッガを使って確認すること．
}