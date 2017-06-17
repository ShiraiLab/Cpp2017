/*
応用プログラミングA 第9回演習 ポインタ・参照
問題１ ポインタの基礎

*/
#include <iostream>
#include <cstring> //for strcpy()
using namespace std;
class StudentList {
	char name[50];
public:
	void set(char *n);
	void show();
};

void StudentList::set(char *n) {
	strcpy(name, n); //取得した入力文字列の配列の先頭アドレスを，プライベートメンバのname(文字列・配列)のポインタにコピー
}
void StudentList::show() {
	cout << "氏名： " << name << "\n";
}

int main() {
	StudentList s1, s2;
	StudentList *ptr;
	char nm[50];

	//↓これ重要↓
	ptr = &s1; //オブジェクトs1のポインタを取得（メモリの先頭アドレス）
    //↑important↑
	cout << "1人目のデータを入力します\n";
	cout << "名前を入力してください：";
	cin >> nm;
	//s1に直接アクセスせず，ptrを使って値を設定する．
	ptr->set(nm); //s1->set()とせず，ptr->set()とすることが今回の課題ですのよ！

	//s2についても同様
	ptr = &s2;
	cout << "2人目のデータを入力します\n";
	cout << "名前を入力してください：";
	cin >> nm;
	ptr->set(nm);
	
	//表示部，まあ繰り返す意味はないのですけど，ポインタで軽く操作しましょうよ
	ptr = &s1;
	cout << "1\t"; //タブで固定位置に表示する空白を作る
	ptr->show();

	ptr = &s2; cout << "2\t";	ptr->show();
    //まあ普通はこのような処理をするなら配列とfor文で書きますよね
	
	return 0;
}