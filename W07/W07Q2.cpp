/*
���p�v���O���~���OA ��7�� �z��
�ۑ�2�F�I�u�W�F�N�g�z��̏�����
*/
#include<iostream>
using namespace std;

class Coord {
	double x, y, z;
public :
	Coord(double s, double t, double u) {		x = s; y = t; z = u;	}
	//���̃����o�͊������܂��I
};

int main() {
	Coord ob[4] = {
		Coord(1,2,3),
		Coord(4,5,6),
		Coord(7,8,9),
		Coord(-1,-2,-3)
	};


	return 0;
}