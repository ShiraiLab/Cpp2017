/*
���p�v���O���~���OA ��4�񉉏K �N���X�̊T�v
���1 �֐��̃I�[�o�[���[�h
�Ȃ�ł���r�ł���֐� max()������
*/
#include<iostream>
using namespace std;

//�֐��̃t�H�[�}�b�g�C���Ȃ݂ɂ���̓N���X�Ƃ͊֌W���Ȃ��I
char	max(char a, char b);		//������̔�r
int		max(int a, int b);			//�����̔�r
double	max(double a, double b);	//�����̔�r

int main() {
	//�e�X�g�f�[�^�e��
	char c1 = 'a', c2 = 'b';
	int i1 = 10, i2 = 20;
	double d1 = 1.01, d2 = 0.99;
	//���s���
	cout << " [" c1 << "] �� [" << c2 << "] ���r���āC�傫���̂�" << max(c1, c2) << "�ł�\n";
	cout << " " << i1 << " �� " << i2 << " ���r���āC�傫���̂�" << max(i1, i2) << "�ł�\n";
	cout << " " << d1 << " �� " << d2 << " ���r���āC�傫���̂�" << max(d1, d2) << "�ł�\n";
	return 0;
}
//�ȉ��̊֐��̎����͂ǂ��ɏ����Ă��悢
//������̔�r
char	max(char a, char b) {
	return a > b ? a : b; //�������Z�q�i�O�����Z�q�j���g���ƊȒP�I
}
//�����̔�r
int		max(int a, int b) {
	return a > b ? a : b;
}
//�����̔�r
double	max(double a, double b) {
	return a > b ? a : b;
}
