#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int input_num = 0; //�Է¹޴� ����
	cin >> input_num;
	int mok = 0; //��
	int digit = 0; //�ڸ���
	int temp = 0; //�ڸ��� ���� �� ��� ����� ����
	for (int i = 1; i <= input_num; i++) {
		digit = 0;
		temp = i;
		while (1) { //�ڸ��� ���ϰ�
			digit++;
			temp /= 10;
			if (temp < 1) {
				break;
			}
		}
		int tempi = i;
		int temppow = 0;
		int count = 0;
		for (int j = digit-1; j >=0; j--) { //�ڸ�����ŭ ���ũ
			mok = tempi / pow(10, j);
			if (mok == 3 || mok == 6 || mok == 9)  count++;

			temppow = pow(10, j);
			tempi =tempi % temppow;
		}
		if (count == 0) cout << i;
		else {
			while (count > 0) {
				cout << "-";
				count--;
			}
		}
		cout << " ";
	}
	system("pause");
	return 0;
}

