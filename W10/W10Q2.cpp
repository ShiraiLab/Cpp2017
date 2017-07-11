/*
応用プログラミングA 第10回演習 関数オーバーロード
問題2(必須) コンストラクタ関数のオーバーロード
*/
#include <iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class strtype {
	char *p;
public:
	strtype(char *s);
	strtype(char *s, int n);
	char *getstring() { return p; }
};

strtype::strtype(char * s)
{
	int l; //引き渡される文字列の長さ
	l = strlen(s) + 1; //\nの分も追加
//	char型のメモリを l文字ぶん確保して p に渡す
	p = new char[l];
	if (!p) {
		cout << "メモリ確保できませんでした！\n";
		exit(1);
	}
	strcpy(p, s);
}
strtype::strtype(char * s, int n)
{
	int l; //引き渡される文字列の長さ
	l = strlen(s)*n + 1; // n倍くりかえすので...
	p = new char[l];
	if (!p) {
		cout << "メモリ確保できませんでした！\n";
		exit(1);
	}
	// n=0のときは終端しておかないとフフフですよ
	*p = '\0'; //シングルクォーテーションです
	// n回くりかえしてコピーする処理
	for (int i = 0; i < n; i++) {
		strcat(p, s);//strcpyではなくstrcat
	 //strcpyはsrcのポインタを移動してしまうので，1回しか使えない
     //	strcpy(p, s);//実験してみてね

	}
}

int main() {
	strtype s1("Good!");
	strtype s2("Good!", 1000000);
//	strtype s2("Good!", 16777420000000000000);
	cout << "s1: " << s1.getstring() << "\n";
	cout << "s2: " << s2.getstring() << "\n";
	return 0;
}
