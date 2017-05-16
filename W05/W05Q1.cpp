/* ���p�v���O���~���OA ��5�� �N���X�̊T�v(2)
���1(�K�{) ���������󂯎��R���X�g���N�^
�� 3 �񉉏K�ō쐬�����O�p�`��\���N���X Triangle �ɁA�������Ƃ��� 3 �ӂ̒������󂯎��R���X�g
���N�^��ǉ�����B�܂��A3 �ӂ̒�������ʐς��v�Z���Ė߂�l�Ƃ��ĕԂ������o�֐� area()��ǉ�����B
���̃N���X���e�X�g���邽�߂ɁA�ȉ��̗�̂悤�� main()�֐��ŎO�p�`�� 3 �ӂ̒����Ɩʐς��o�͂���B
3 �ӂ̒����̓R���\�[��������͂����A�v���O�������Œ��ڐݒ肷��B
�ȉ��C��3��ۑ�3���...
*/

#include <iostream>
#include<math.h>
using namespace std;

class Triangle {
	double a, b, c;
public:
	void set_a(double x);
	void set_b(double x);
	void set_c(double x);
	double get_a();
	double get_b();
	double get_c();
	double areatri();
};
void Triangle::set_a(double x) { a = x; }
void Triangle::set_b(double x) { b = x; }
void Triangle::set_c(double x) { c = x; }
double Triangle::get_a() { return a; }
double Triangle::get_b() { return b; }
double Triangle::get_c() { return c; }
double Triangle::areatri() {
	double s; //a,b,c�͐錾���Ȃ��Ă����p�ł��邱�Ƃɒ���
	s = (a + b + c) / 2;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}

int main() {
	Triangle obj;
	double a, b, c;
	cout << "3�p�`�̕ӂ̒�������͂��Ă��������F";
	cin >> a >> b >> c;
	obj.set_a(a);
	obj.set_b(b);
	obj.set_c(c);
	cout << "��a = " << obj.get_a() << endl;
	cout << "��b = " << obj.get_b() << endl;
	cout << "��c = " << obj.get_c() << endl;
	cout << "�ʐ� = " << obj.areatri() << endl;
	return 0;
}