/*
���p�v���O���~���OA ��9�񉉏K �|�C���^�E�Q��
���P �|�C���^�̊�b

*/
#include <iostream>
#include <cstring> //for strcpy()
using namespace std;
class StudentList {
	char name[50];
public:
	void set(char *n);
	void show();
};

void StudentList::set(char *n) {
	strcpy(name, n); //�擾�������͕�����̔z��̐擪�A�h���X���C�v���C�x�[�g�����o��name(������E�z��)�̃|�C���^�ɃR�s�[
}
void StudentList::show() {
	cout << "�����F " << name << "\n";
}

int main() {
	StudentList s1, s2;
	StudentList *ptr;
	char nm[50];

	//������d�v��
	ptr = &s1; //�I�u�W�F�N�gs1�̃|�C���^���擾�i�������̐擪�A�h���X�j
    //��important��
	cout << "1�l�ڂ̃f�[�^����͂��܂�\n";
	cout << "���O����͂��Ă��������F";
	cin >> nm;
	//s1�ɒ��ڃA�N�Z�X�����Cptr���g���Ēl��ݒ肷��D
	ptr->set(nm); //s1->set()�Ƃ����Cptr->set()�Ƃ��邱�Ƃ�����̉ۑ�ł��̂�I

	//s2�ɂ��Ă����l
	ptr = &s2;
	cout << "2�l�ڂ̃f�[�^����͂��܂�\n";
	cout << "���O����͂��Ă��������F";
	cin >> nm;
	ptr->set(nm);
	
	//�\�����C�܂��J��Ԃ��Ӗ��͂Ȃ��̂ł����ǁC�|�C���^�Ōy�����삵�܂��傤��
	ptr = &s1;
	cout << "1\t"; //�^�u�ŌŒ�ʒu�ɕ\������󔒂����
	ptr->show();

	ptr = &s2; cout << "2\t";	ptr->show();
    //�܂����ʂ͂��̂悤�ȏ���������Ȃ�z���for���ŏ����܂����
	
	return 0;
}