//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//int main() {
//	int row, col, count, min = 64;
//	char tmp;
//	cin >> row >> col;
//	int **chessArray = new int*[row];
//	for (int i = 0;i < row;i++)
//		chessArray[i] = new int[col];//�ԷµǴ� ���� ũ�� ���� �Ҵ�
//
//	cin.ignore();
//	for (int i = 0;i < row;i++) {
//		for (int j = 0;j < col;j++) {
//			cin >> tmp;
//			if (tmp == 'B')
//				chessArray[i][j] = (i + j) % 2;
//			else
//				chessArray[i][j] = (i + j + 1) % 2;
//		}
//	}//���� ��ü�� �Է¹޴� ���ÿ� ù ����� B�� �����ϴ� ��� �����ؾ� �ϴ� ��Ͽ��� 1, �������� �ʾƵ� �Ǵ� ��Ͽ��� 0 ����
//
//	for (int i = 0;i < row - 7;i++) {
//		for (int j = 0;j < col - 7;j++) {
//
//			count = 0;
//			for (int k = i;k < i + 8;k++) {
//				for (int l = j;l < j + 8;l++) {
//					count += chessArray[k][l];
//				}
//			}//8*8 ������ ���� �ջ�
//
//			if (min > (count > 32 ? 64 - count : count))
//				min = (count > 32 ? 64 - count : count);
//			//W�� �����ϴ� ������� ĥ�ϴ� ��� �����ؾ� �ϴ� ��ϼ�(64-count)�� B�� �����ϴ� ������� ĥ�ϴ� ��쿡 �����ؾ� �ϴ� ��ϼ�(count) ��
//			//���� �� ���� ���� min���� �۴ٸ� min�� ����
//		}
//	}
//	cout << min;
//	return 0;
//}