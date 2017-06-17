/*
 ���p�v���O���~���OA ��7�� �z��
 �ۑ�1�F�t�����h�֐�
*/
#include<iostream>
#include<cstring> //strcpy()�ɕK�v
using namespace std;
class CName; // �����Ő��CName�̖��O�����錾���Ă���
class Circle {
	double x,y;    double radius;	int r, g, b;
public: 
	void set_xyr(double s, double t, double r)	 {	x = s; y = t; radius = r;	}
	void set_color(int u, int v, int w)			 {		r = u; g = v; b = w;	}
	void show();
	bool isSame(CName col); //CName�̃����o�ł͂Ȃ��̂Œ���
};
class CName {
	char name[50];	int r, g, b;
public:
	CName(char* str, int u, int v, int w);
	char* get_name() { return name; }
	void show();
	//������Circle�N���X��isSame()���t�����h�֐��Ƃ���
	friend bool Circle::isSame(CName col);
};
void Circle::show() {
	cout << "���W�F(" << x << ", " << y << ")\n";
	cout << "���a�F(" << radius << "\n";
	cout << "RGB �F(" << r << ", " << g << ", " << b << ")\n";
}
bool Circle::isSame(CName col) {
	//�����͎����ōl���邱��
	if (r == col.r && g == col.g && b == col.b) { //friend��錾���Ă����Ȃ���r,g,b�͎Q�Ƃł��Ȃ��I
		return true;
	}
	else {
		return false;
	}
}
CName::CName(char* str, int u, int v, int w) {
	strcpy(name, str); r = u; g = v; b = w;
}
void CName::show() {
	cout << name << ":(" << r << ", " << g << ", " << b << ")\n";
}


int main() {
	Circle ob;
	CName co1("Red", 255, 0, 0);	CName co2("Green", 0,255, 0);	CName co3("Blue", 0, 0, 255);
	ob.set_xyr(2.0, 3.0, 5.0); 	ob.set_color(255, 0, 0); //�o��̌��ʉ�ʂ��
	cout << "�~�̏���\��\n"; ob.show();
	cout << "�F1�̏���\��\n"; co1.show();
	cout << "�F2�̏���\��\n"; co2.show();
	cout << "�F3�̏���\��\n"; co3.show();
	cout << "���̉~�̐F��" << co1.get_name();
	if (ob.isSame(co1)) { cout << "�ł�\n"; }	else { cout << "�ł͂���܂���\n"; }
	cout << "���̉~�̐F��" << co2.get_name();
	if (ob.isSame(co2)) { cout << "�ł�\n"; }	else { cout << "�ł͂���܂���\n"; }
	cout << "���̉~�̐F��" << co3.get_name();
	if (ob.isSame(co3)) { cout << "�ł�\n"; }	else { cout << "�ł͂���܂���\n"; }
	return 0;
}
