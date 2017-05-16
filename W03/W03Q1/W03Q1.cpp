/*
応用プログラミングA 第3回　演習問題　学籍番号 1234567 Akihiko SHIRAI
問題1 C++のコンソール入出力
*/
#include <iostream>
using namespace std;

int main() {
	char name[50];
	int score;
	char grade;
	cout << "名前を入力してください";
	cin >> name;
 while (true) {
		cout << "点数を入力してください";
	cin >> score;
	if (score < 0 || score>100) {
		grade = 'X';
	}
	else if (score >= 90) { grade = 'S'; }
	else if (score >= 80) { grade = 'A'; }
	else if (score >= 70) { grade = 'B'; }
	else if (score >= 60) { grade = 'C'; }
	else { grade = 'E'; }
	cout << name << "さんの評価は[" <<
		grade << "]ですね\n";
 }//while
return 0;
}