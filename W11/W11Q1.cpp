/*

���p�v���O���~���OA ��11�񉉏K �֐��I�[�o�[���[�h
�֐��I�[�o�[���[�h�̊m�F

*/

#include <iostream>
using namespace std;

//�Q�̒l���r����max 
double max(double a, double b) {
	return a > b ? a : b; // �������Z�q�C�g�����Ȃ��܂��傤�I
}

//�R�̒l���r����max
double max(double a, double b, double c) {
	double max;
	max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	return max;
}

int main() {
	double a = -1.1, b = 0.3, c = 4.5;
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "c = " << c << "\n";

	cout << "max(a,b) = " << max(a, b) << "\n";
	cout << "max(b,a) = " << max(b, a) << "\n";
	cout << "max(a,b,c) = " << max(a,b,c) << "\n";
	//�ȉ���
	return 0;
}