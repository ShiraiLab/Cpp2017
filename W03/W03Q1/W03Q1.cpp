/*
���p�v���O���~���OA ��3��@���K���@�w�Дԍ� 1234567 Akihiko SHIRAI
���1 C++�̃R���\�[�����o��
*/
#include <iostream>
using namespace std;

int main() {
	char name[50];
	int score;
	char grade;
	cout << "���O����͂��Ă�������";
	cin >> name;
 while (true) {
		cout << "�_������͂��Ă�������";
	cin >> score;
	if (score < 0 || score>100) {
		grade = 'X';
	}
	else if (score >= 90) { grade = 'S'; }
	else if (score >= 80) { grade = 'A'; }
	else if (score >= 70) { grade = 'B'; }
	else if (score >= 60) { grade = 'C'; }
	else { grade = 'E'; }
	cout << name << "����̕]����[" <<
		grade << "]�ł���\n";
 }//while
return 0;
}