/*
���p�v���O���~���OA ��10�񉉏K �֐��I�[�o�[���[�h
���1(�K�{) �I�u�W�F�N�g�쐬�ƑΉ�����R���X�g���N�^�̊m�F
*/

#include <iostream>
using namespace std;

class myclass {
	int x;
public:
	myclass() {
		x = 0;
		cout << "�������Ȃ��̃R���X�g���N�^\n";
	}
	myclass(int n) {
		x = n;
		cout << "����������̃R���X�g���N�^\n";
	}
	int getx() { return x; }
};

int main() {
	//�R���X�g���N�^�Ɉ�����n���ď�����
	myclass o1(0); //�o�葤�̎��s���ʂ��������ł́u����������v�ł���ׂ�
	cout << "o1: " << o1.getx() << "\n";
	//�R���X�g���N�^�ɂ͈����Ȃ��̃R���X�g���N�^���g���ď�����
	myclass o2; //�K�v�ɉ����ďC��
	cout << "o2: " << o1.getx() << "\n";
	//�I�u�W�F�N�g��z��ŏ�����
	myclass o3[2]; //���s���ʂ��݂�ɂQ�̔����������z��Ƃ��Đ錾���ׂ�
	cout << "o3[0]: " << o3[0].getx() << "\n";
	cout << "o3[1]: " << o3[0].getx() << "\n";
	//�I�u�W�F�N�g��z��ŏ���������ۂɁC�傩�����������āC�l���w�肷���
	myclass o4[2] = { 0, 0 }; //���̏����͊o���邵���Ȃ��ł��ˁC���z���悤���Ȃ��D
	cout << "o4[0]: " << o4[0].getx() << "\n";
	cout << "o4[1]: " << o4[0].getx() << "\n";
	// new���g���Ĕz��I�u�W�F�N�g�����ۂɁC
	// �ŏ��̐錾�� *(�A�X�^���X�N)��t���Y����
	myclass *o5;
	o5 = new myclass[2]; //����͔z��Ƃ��ď��������Ă���C�ɂ�������炸 o5 �̓|�C���^�ł͂Ȃ��I
	if (!o5) {
		cout << "���������蓖�ăG���[\n";
		return 1;
	}
	cout << "o5[0]" << o5[0].getx() << "\n";
	cout << "o5[1]" << o5[1].getx() << "\n";
	return 0;
}