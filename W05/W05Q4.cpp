/* 応用プログラミングA 第5回演習問題 クラスの概要(2)
　問題4：共用体 (教科書p.59〜)
 【共用体とは？】教科書 p.60から抜粋
クラスと構造体はとても似ている．
クラスは構造体＋メソッドと理解することができるが，
C++においては，クラスと構造体はそれぞれ役割を持って利用できる．
オブジェクト指向プログラミングでは「カプセル化」が重要で，
インスタンスやコンストラクタに加えて，
動的に変化する変数や配列の内容を，
クラスオブジェクトと一体にして扱いたい時がある．
構造体は変数の束なのでそれができるが，クラスは設計なのでできない．
すべてのデータが同じメモリ位置を共有するようなクラス型がほしい．
それを「共用体」としている．
共用体は他のクラスを継承できない，基本クラスとしても利用できない．
staticメンバをを持つこともできない
 
問題：教科書の例2.5の2を参考に，コンソールから入力された int型の値の
 バイナリビットパターンをバイト単位で出力するプログラムを作成せよ．
 */
#include <iostream>
using namespace std;
union bits {
	bits(int n);
	void show_bits();
	int i;
	unsigned char c[sizeof(int)];
};
bits::bits(int n) {	i = n;}
void bits::show_bits() {
	int i, j;
	for (j = sizeof(int) - 1; j >= 0; j--) {
		cout << "バイト単位のビットパターン" << j << " :";
		for (i = 128; i; i >>= 1) {
			if (i & c[j]) {
				cout << "1";
			}
			else {
				cout << "0";
			}
		}
		cout << endl;
	}
}
int main() {
	int n;
	cout << "整数を入力してください：";
	cin >> n;
	bits ob(n); 
	ob.show_bits();
	return 0;

}