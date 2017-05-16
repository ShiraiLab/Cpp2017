/*
応用プログラミングA 第4回　学籍番号 1234567 Akihiko SHIRAI
問題4 ファイル操作とライブラリ関数の利用：ライブラリを使って短いコードでタイピングゲームを作る
*/
#include <stdio.h>
#include <time.h>																		// タイマー，時刻関係
#include <string.h> 																	// strcmp()のために必要
#include <stdlib.h> 																	// 乱数のために必要
int main() {
	//初期設定
	FILE *fp; 																			// ファイル構造体FILEを使ってファイルポインタ*fpを宣言
	char words1[200][81], words2[200][81];												// words.txtファイルを格納する辞書配列
	int wc = 0; 																		// ワードカウント（辞書のインデックス)
	int n = 0; 																			// 出題用インデックス
	char str[81]; 																		// ユーザのタイピング入力を格納する文字列
	clock_t t0; 																		// 開始時刻を格納する clock_t型 の 変数t0
	//words.txt ファイルのロード
	fp = fopen("words.txt", "r");														// ReadOnlyモードでwords.txtを開く
	while (fscanf(fp, "%s %s", words1[wc], words2[wc]) != EOF )							// End of Fileが見つかるまで繰り返しfscan→配列へ 
	  { wc++; }																			// 辞書ファイルに何件データがあるのか数え上げていく
	//タイマーの設定，ゲームの開始
	printf("タイピング・オブ・KAIT！！\nEnterキーを押すとスタートしますよ...");
	getchar(); 																			// エンターキーを押すと次の行に行く
	srand((unsigned int)time(NULL)); 													// 現在のtime()を使ってランダムシードを設定するおまじない
	t0 = clock(); 																		// 現在のクロック時刻(プログラムが起動してから現在までのミリ秒)を格納する
	//ゲーム実行中（タイマーが制限時間を超えるまで繰り返し）
	while ((clock() - t0) / CLOCKS_PER_SEC < 10) 										// CLOCKS_PER_SECは1000のこと，time.hに#defineされている
	{
//		printf("whileしてます! "); //test
//		n = 1;		//(本当はランダムを使って出題しますが)変数 n を出題用のインデックスにします
		n = rand() % wc;																// 辞書のインデックスで割った余り，つまり5件なら 0～4 の値しか出ない
		//まずは辞書から ひらがな を表示できるようにする,ついでに回答の romaji も
		printf("[%d] 問題「%s」→ Please type [%s] !\n", n, words1[n], words2[n]);
		//scanfをつかってユーザのタイピング入力を受け付ける
		scanf("%s", str); //ユーザのタイピング入力
		//判定する，ダメならもう一度入力させる
		while ( strcmp( str, words2[n]) != 0 ) {										//判定には strcmp()を使う，ライブラリstring.hが必要
			printf("もう一度ｗｗ\n");  scanf("%s", str);								//再入力をさせるプロンプト
		}
		//romajiの文字数をスコア score に加算 → 未完とします！回答編を見てやってみてください
	}
	//終了，結果の表示
	return 0;
}