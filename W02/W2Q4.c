/*
���p�v���O���~���OA ��4��@�w�Дԍ� 1234567 Akihiko SHIRAI
���4 �t�@�C������ƃ��C�u�����֐��̗��p�F���C�u�������g���ĒZ���R�[�h�Ń^�C�s���O�Q�[�������
*/
#include <stdio.h>
#include <time.h>																		// �^�C�}�[�C�����֌W
#include <string.h> 																	// strcmp()�̂��߂ɕK�v
#include <stdlib.h> 																	// �����̂��߂ɕK�v
int main() {
	//�����ݒ�
	FILE *fp; 																			// �t�@�C���\����FILE���g���ăt�@�C���|�C���^*fp��錾
	char words1[200][81], words2[200][81];												// words.txt�t�@�C�����i�[���鎫���z��
	int wc = 0; 																		// ���[�h�J�E���g�i�����̃C���f�b�N�X)
	int n = 0; 																			// �o��p�C���f�b�N�X
	char str[81]; 																		// ���[�U�̃^�C�s���O���͂��i�[���镶����
	clock_t t0; 																		// �J�n�������i�[���� clock_t�^ �� �ϐ�t0
	//words.txt �t�@�C���̃��[�h
	fp = fopen("words.txt", "r");														// ReadOnly���[�h��words.txt���J��
	while (fscanf(fp, "%s %s", words1[wc], words2[wc]) != EOF )							// End of File��������܂ŌJ��Ԃ�fscan���z��� 
	  { wc++; }																			// �����t�@�C���ɉ����f�[�^������̂������グ�Ă���
	//�^�C�}�[�̐ݒ�C�Q�[���̊J�n
	printf("�^�C�s���O�E�I�u�EKAIT�I�I\nEnter�L�[�������ƃX�^�[�g���܂���...");
	getchar(); 																			// �G���^�[�L�[�������Ǝ��̍s�ɍs��
	srand((unsigned int)time(NULL)); 													// ���݂�time()���g���ă����_���V�[�h��ݒ肷�邨�܂��Ȃ�
	t0 = clock(); 																		// ���݂̃N���b�N����(�v���O�������N�����Ă��猻�݂܂ł̃~���b)���i�[����
	//�Q�[�����s���i�^�C�}�[���������Ԃ𒴂���܂ŌJ��Ԃ��j
	while ((clock() - t0) / CLOCKS_PER_SEC < 10) 										// CLOCKS_PER_SEC��1000�̂��ƁCtime.h��#define����Ă���
	{
//		printf("while���Ă܂�! "); //test
//		n = 1;		//(�{���̓����_�����g���ďo�肵�܂���)�ϐ� n ���o��p�̃C���f�b�N�X�ɂ��܂�
		n = rand() % wc;																// �����̃C���f�b�N�X�Ŋ������]��C�܂�5���Ȃ� 0�`4 �̒l�����o�Ȃ�
		//�܂��͎������� �Ђ炪�� ��\���ł���悤�ɂ���,���łɉ񓚂� romaji ��
		printf("[%d] ���u%s�v�� Please type [%s] !\n", n, words1[n], words2[n]);
		//scanf�������ă��[�U�̃^�C�s���O���͂��󂯕t����
		scanf("%s", str); //���[�U�̃^�C�s���O����
		//���肷��C�_���Ȃ������x���͂�����
		while ( strcmp( str, words2[n]) != 0 ) {										//����ɂ� strcmp()���g���C���C�u����string.h���K�v
			printf("������x����\n");  scanf("%s", str);								//�ē��͂�������v�����v�g
		}
		//romaji�̕��������X�R�A score �ɉ��Z �� �����Ƃ��܂��I�񓚕҂����Ă���Ă݂Ă�������
	}
	//�I���C���ʂ̕\��
	return 0;
}