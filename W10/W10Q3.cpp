/*
応用プログラミングA 第10回演習 関数オーバーロード
問題3 コピーコンストラクタ
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
//オブジェクト strtype に含まれる文字列の c の数を数えてintで返す関数
int ccount (strtype x, char c) {
	int count = 0;
	char *p;
	p = x.getstring();
	//ポインタって便利！ *pがnullになるとき，whileを抜けます
	while (*p) {
		if (*p == c) { count++; }
		p++; //一文字送る＆終端文字列の時はnullになるしかけ，よく使う．
	}
	return count;
}
int main() {
	strtype s1("Good!");
//	strtype s2("Good!", 5);
	strtype s2("Good!", 100000);
	cout << "s1の o の数：" << ccount(s1, 'o') << "\n";
	cout << "s2の o の数：" << ccount(s2, 'o') << "\n";
	return 0;
}
