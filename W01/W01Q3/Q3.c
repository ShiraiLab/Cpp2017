/*

応用プログラミングA 第1回
問題3 関数
学籍番号 1234567 Akihiko SHIRAI
機能：ヘロンの公式を使って三角形の面積を求める
*/
#include <stdio.h>
#include <math.h> //sqrt()のために
double areatri(double a, double b, double c) {
	double s;
	s = (a + b + c) / 2;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}

int main() {
	double a, b, c;
	printf("三角形の辺の長さを入力してください");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("面積は%fです\n",
		areatri(a,b,c));
	return 0;
}