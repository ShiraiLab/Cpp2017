/*
���p�v���O���~���OA ��4�񉉏K �N���X�̊T�v
���2 �R���X�g���N�^�ƃf�X�g���N�^

�\�z�҂Ɣj��ҁI
*/
#include<iostream>
using namespace std;

//�R���X�g���N�^�ƃf�X�g���N�^�����Ȃ������p�̃N���X
class TestClass {
public:
	TestClass();	//���ꂪ�R���X�g���N�^
	~TestClass();	//���ꂪ�f�X�g���N�^�C�`���_�t���D
};

TestClass::TestClass() {
	cout << "��͑n���҂Ȃ�I\n";
}

TestClass::~TestClass() {
	cout << "��͔j��҂Ȃ�I\n";

}
int main() {
	TestClass ob;
	cout << "�������main()�ł���\n";
	return 0;
	//����return 0���O�܂Ńf�X�g���N�^�͌Ă΂�܂���D
	//�f�o�b�K���g���Ċm�F���邱�ƁD
}