/* ���p�v���O���~���OA �I�����C���u�`�^ �� http://bit.ly/kcpp2017
��5�� �N���X�̊T�v(2) ���1(�K�{) ���������󂯎��R���X�g���N�^
��3�񉉏K�ō쐬�����O�p�`��\���N���X Triangle �ɁA�������Ƃ��� 3 �ӂ̒������󂯎��R���X�g
���N�^��ǉ�����B�܂��A3 �ӂ̒�������ʐς��v�Z���Ė߂�l�Ƃ��ĕԂ������o�֐� area()��ǉ�����B
���̃N���X���e�X�g���邽�߂ɁA�ȉ��̗�̂悤�� main()�֐��ŎO�p�`�� 3 �ӂ̒����Ɩʐς��o�͂���B
3 �ӂ̒����̓R���\�[��������͂����A�v���O�������Œ��ڐݒ肷��B
*/
//�ȉ��C��3��ۑ�3��� Triangle�N���X�����p...
#include <iostream>
#include<math.h>
using namespace std;
#pragma region ��������N���X�錾
class Triangle {
	double a, b, c;
public:
//�������ɉ��������󂯎��R���X�g���N�^������Ă���������
	Triangle(double u, double v, double w);
	void set_a(double x);
	void set_b(double x);
	void set_c(double x);
	double get_a();
	double get_b();
	double get_c();
	double area();
}; //�������N���X�錾�̏I���C�ȉ��͎����p�[�g�D
#pragma endregion
#pragma region ���\�b�h�̎���
//�R���X�g���N�^�̎���
Triangle::Triangle(double u, double v, double w) {
	a = u; b = v; c = w;
}
void Triangle::set_a(double x) { a = x; }
void Triangle::set_b(double x) { b = x; }
void Triangle::set_c(double x) { c = x; }
double Triangle::get_a() { return a; }
double Triangle::get_b() { return b; }
double Triangle::get_c() { return c; }
double Triangle::area() {
	double s; //a,b,c�͐錾���Ȃ��Ă����p�ł��邱�Ƃɒ���
	s = (a + b + c) / 2;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}
#pragma endregion
//��5��ۑ�1�Ƃ��Ă͂���main�� Triangle(5,12,13)�Ƃ��Ėʐ�=30�ƂȂ�悤�ɂ��Ă�������
int main() {
	Triangle obj(5.0f, 12.0f, 13.0f); //f�ŏI��鐔��float/double�𖾎����Ă���
	cout << "��a = " << obj.get_a() << endl;
	cout << "��b = " << obj.get_b() << endl;
	cout << "��c = " << obj.get_c() << endl;
	cout << "�ʐ� = " << obj.area() << endl;
	return 0;
}