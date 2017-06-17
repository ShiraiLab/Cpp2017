/*
応用プログラミングA 第7回 配列
課題2：オブジェクト配列の初期化
*/
#include<iostream>
using namespace std;

class Coord {
	double x, y, z;
public :
	Coord(double s, double t, double u) {		x = s; y = t; z = u;	}
	//他のメンバは割愛します！
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