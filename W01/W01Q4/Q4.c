/*

���p�v���O���~���OA ��1��
���4 �\����
�w�Дԍ� 1234567 Akihiko SHIRAI
���O�Ɗw�ЁC�w�N�̃f�[�^���i�[����\����
*/
#include <stdio.h>
typedef struct scard {
	char name[50];
	int  number;
	int  grade;
} SCARD;

int main() {
	SCARD list[10]; //�\���̂̔z���錾�C10�m�ہD
	int i;
	for (i = 0; i < 3; i++) { 
		printf("%d�l�ڂ̃f�[�^����͂��܂�\n", i + 1);
		printf("���O����͂��Ă�������:");
		scanf("%s", list[i].name);
		printf("�w�Дԍ�����͂��Ă�������:");
		scanf("%d",&list[i].number);
		printf("�w�N����͂��Ă�������:");
		scanf("%d",&list[i].grade);
	}//end of for
	 //���ʕ\��
	for (i = 0; i < 3; i++) {
		printf("����: %s \n", list[i].name);
		printf("�w��: %d \n", list[i].number);
		printf("�w�N: %d \n", list[i].grade);
	}
	return 0;
}