/*

���p�v���O���~���OA ��1��
���3 �֐�
�w�Дԍ� 1234567 Akihiko SHIRAI
�@�\�F�w�����̌������g���ĎO�p�`�̖ʐς����߂�
*/
#include <stdio.h>
#include <math.h> //sqrt()�̂��߂�
double areatri(double a, double b, double c) {
	double s;
	s = (a + b + c) / 2;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}

int main() {
	double a, b, c;
	printf("�O�p�`�̕ӂ̒�������͂��Ă�������");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("�ʐς�%f�ł�\n",
		areatri(a,b,c));
	return 0;
}