/* ���p�v���O���~���OA ��5�񉉏K��� �N���X�̊T�v(2)
�@���4�F���p�� (���ȏ�p.59�`)
 �y���p�̂Ƃ́H�z���ȏ� p.60���甲��
�N���X�ƍ\���̂͂ƂĂ����Ă���D
�N���X�͍\���́{���\�b�h�Ɨ������邱�Ƃ��ł��邪�C
C++�ɂ����ẮC�N���X�ƍ\���̂͂��ꂼ������������ė��p�ł���D
�I�u�W�F�N�g�w���v���O���~���O�ł́u�J�v�Z�����v���d�v�ŁC
�C���X�^���X��R���X�g���N�^�ɉ����āC
���I�ɕω�����ϐ���z��̓��e���C
�N���X�I�u�W�F�N�g�ƈ�̂ɂ��Ĉ���������������D
�\���͕̂ϐ��̑��Ȃ̂ł��ꂪ�ł��邪�C�N���X�͐݌v�Ȃ̂łł��Ȃ��D
���ׂẴf�[�^�������������ʒu�����L����悤�ȃN���X�^���ق����D
������u���p�́v�Ƃ��Ă���D
���p�̂͑��̃N���X���p���ł��Ȃ��C��{�N���X�Ƃ��Ă����p�ł��Ȃ��D
static�����o���������Ƃ��ł��Ȃ�
 
���F���ȏ��̗�2.5��2���Q�l�ɁC�R���\�[��������͂��ꂽ int�^�̒l��
 �o�C�i���r�b�g�p�^�[�����o�C�g�P�ʂŏo�͂���v���O�������쐬����D
 */
#include <iostream>
using namespace std;
union bits {
	bits(int n);
	void show_bits();
	int i;
	unsigned char c[sizeof(int)];
};
bits::bits(int n) {	i = n;}
void bits::show_bits() {
	int i, j;
	for (j = sizeof(int) - 1; j >= 0; j--) {
		cout << "�o�C�g�P�ʂ̃r�b�g�p�^�[��" << j << " :";
		for (i = 128; i; i >>= 1) {
			if (i & c[j]) {
				cout << "1";
			}
			else {
				cout << "0";
			}
		}
		cout << endl;
	}
}
int main() {
	int n;
	cout << "��������͂��Ă��������F";
	cin >> n;
	bits ob(n); 
	ob.show_bits();
	return 0;

}