/*
���p�v���O���~���OA ��3��@���K���@�w�Дԍ� 1234567 Akihiko SHIRAI
���2 �N���X�̊�{
���ȏ�p.19 ��1.5 �Ƀ����o�ϐ���
�A�N�Z�b�T(accessor)�֐���ǉ�����
*/
#include <iostream>
using namespace std;

class myclass {
	//����J(private)�����o�ϐ�
	int a; 	int b;
public:
	void set_a(int num);
	void set_b(int num);
	int get_a();
	int get_b();
};
void myclass::set_a(int num) {
	a = num;
}
void myclass::set_b(int num)
{
	b = num;
}
int myclass::get_a() {	return a;}
int myclass::get_b() {	return b;}

int main() {
	myclass ob1;
	ob1.set_a(10);
	ob1.set_b(99);
	cout << ob1.get_a() << endl;
	cout << ob1.get_b() << endl;
	return 0;
}