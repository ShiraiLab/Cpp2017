/*

応用プログラミングA 第1回
問題4 構造体
学籍番号 1234567 Akihiko SHIRAI
名前と学籍，学年のデータを格納する構造体
*/
#include <stdio.h>
typedef struct scard {
	char name[50];
	int  number;
	int  grade;
} SCARD;

int main() {
	SCARD list[10]; //構造体の配列を宣言，10個確保．
	int i;
	for (i = 0; i < 3; i++) { 
		printf("%d人目のデータを入力します\n", i + 1);
		printf("名前を入力してください:");
		scanf("%s", list[i].name);
		printf("学籍番号を入力してください:");
		scanf("%d",&list[i].number);
		printf("学年を入力してください:");
		scanf("%d",&list[i].grade);
	}//end of for
	 //結果表示
	for (i = 0; i < 3; i++) {
		printf("氏名: %s \n", list[i].name);
		printf("学籍: %d \n", list[i].number);
		printf("学年: %d \n", list[i].grade);
	}
	return 0;
}