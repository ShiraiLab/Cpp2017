/*
���p�v���O���~���OA ��10�񉉏K �֐��I�[�o�[���[�h
���2(�K�{) �R���X�g���N�^�֐��̃I�[�o�[���[�h
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
	int l; //�����n����镶����̒���
	l = strlen(s) + 1; //\n�̕����ǉ�
//	char�^�̃������� l�����Ԃ�m�ۂ��� p �ɓn��
	p = new char[l];
	if (!p) {
		cout << "�������m�ۂł��܂���ł����I\n";
		exit(1);
	}
	strcpy(p, s);
}
strtype::strtype(char * s, int n)
{
	int l; //�����n����镶����̒���
	l = strlen(s)*n + 1; // n�{���肩�����̂�...
	p = new char[l];
	if (!p) {
		cout << "�������m�ۂł��܂���ł����I\n";
		exit(1);
	}
	// n=0�̂Ƃ��͏I�[���Ă����Ȃ��ƃt�t�t�ł���
	*p = '\0'; //�V���O���N�H�[�e�[�V�����ł�
	// n�񂭂肩�����ăR�s�[���鏈��
	for (int i = 0; i < n; i++) {
		strcat(p, s);//strcpy�ł͂Ȃ�strcat
	 //strcpy��src�̃|�C���^���ړ����Ă��܂��̂ŁC1�񂵂��g���Ȃ�
     //	strcpy(p, s);//�������Ă݂Ă�

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
