/* ���p�v���O���~���OA ��5�񉉏K��� �N���X�̊T�v(2)
�@���2�F�p��
 �܂��́C���ȏ����K���2.3(p.55�Cp.494�ߕ�)������Ă݂邱�ƁD
 */
#include <iostream>
using namespace std;

//��蕶�ŗ^�����Ă���N���X area_cl2 
class area_cl2 {
	double height, width;
public:
	void set_h(double h);
	void set_w(double w);
	double get_h(); 
	double get_w();
};

//�����`�N���X�� area_cl2�N���X���p�����Ă���
//�u:�v�R�����������Čp�������w��
class rectangle : public area_cl2 {
public:
	rectangle(double h, double w); //�R���X�g���N�^�C�����ƕ����w��
	double area();
};
//�񓙕ӎO�p�`�N���X�� area_cl2�N���X���p�����Ă���
class isosceles : public area_cl2 {
public:
	isosceles(double h, double w); //�R���X�g���N�^�C�����ƕ����w��
	double area();
};
//�ȉ��C����
void area_cl2::set_h(double h) { height = h;}
void area_cl2::set_w(double w) { width = w; }
double area_cl2::get_h() { return height; }
double area_cl2::get_w() { return width; }

//2�̃N���X�̃R���X�g���N�^(�����Ƃ��Ă͓���)
rectangle::rectangle(double h, double w) {
	set_h(h); set_w(w);
}
isosceles::isosceles(double h, double w) {
	set_h(h); set_w(w);
}

//2�̃N���X�̖ʐς����߂�֐������i�����قȂ�j
//�l�p�`�̖ʐς� �����~��
double rectangle::area() {	return get_h() * get_w(); }
//�񓙕ӎO�p�`�̖ʐς� �����~����2
double isosceles::area() {	return 0.5f * get_h() * get_w(); }

//�܂���main���Ȃ��Ǝn�܂�܂���...
int main() {
	rectangle b(10.0, 5.0); //rectangle="�����́C�l�p"�Ƃ����Ӗ�
	isosceles i(4.0, 6.0); //isosceles="2����"�Ƃ����Ӗ�
//�����̂ƎO�p�`�̍����C���C�ʐς�\������ ���ʕ\����
	cout << "�����`�� ����: " << b.get_h() << " ��:" << b.get_w();
	cout << " �ʐ�= " << b.area() << "\n";
	cout << "�񓙕ӎO�p�`�� ����: " << i.get_h() << " ��:" << i.get_w();
	cout << " �ʐ�= " << i.area() << "\n";
	return 0;
}