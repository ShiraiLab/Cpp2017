/*
���p�v���O���~���OA ��4�񉉏K �N���X�̊T�v
���3 ���������󂯎��R���X�g���N�^

�\�z�҂Ɉ�����n���I
*/
#include<iostream>
#include <cmath> //math.h�̃N���X�ŁCsqrt()�̂��߂ɕK�v
using namespace std;

class Triangle {
	double a, b, c;
public:
	//3�ӂ̒l���󂯎��R���X�g���N�^�C������a,b,c�ł͂Ȃ���������ݒ肷�邱�Ƃɒ��ӁI
	Triangle(double u, double v, double w);
	//�ȉ��C�ߋ��̎�������ė��p����Ƃ悢�ł�
	void set_a(double x); //�����̉������͂����̖��O�Cx ���낤�� y, z �ł����ł��悢
	void set_b(double x);
	void set_c(double x);
	double get_a();  double get_b();	double get_c(); //getters
	double area(); //�������郁�\�b�h�͕K�����̃N���X�̐錾�Ńt�H�[�}�b�g�錾���Ă���
};
//�������̃X�R�[�v�i�L���͈́j���ӎ����Ă݂悤
Triangle::Triangle(double u, double v, double w) {
	a = u; b = v; c = w; // private�ϐ��ɒl���󂯓n���΂��̉��̕ϐ��̎g���͑S������
} //u,v,w�̃X�R�[�v�͂����ŏI������
//�ȉ��CSetter/Getter�̎���
void Triangle::set_a(double x) { a = x; }
void Triangle::set_b(double x) { b = x; }
void Triangle::set_c(double x) { c = x; }
double Triangle::get_a() { return a; }
double Triangle::get_b() { return b; }
double Triangle::get_c() { return c; }
//�w�����̌����ɂ��ʐϓ��o
double Triangle::area() {
	double s;
	s = (a + b + c) / 2;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}

int main() {
	//�R���X�g���N�^�̌Ăяo�����̏����ɒ��ӁI
	Triangle obj(3.0f, 4.0f, 5.0f);
	// (�N���X��) ���I�u�W�F�N�g���i�����j �Ƃ����Ăѕ�������D
	// obj�� �N���X�̎��́i�C���X�^���X�j�Ȃ̂� Triangle Hoge(1,2,3) �ł��悢 
	cout << "��a = " << obj.get_a() << endl;
	cout << "��b = " << obj.get_b() << endl;
	cout << "��c = " << obj.get_c() << endl;
	cout << "�ʐ� = " << obj.area() << endl;

	return 0;
}