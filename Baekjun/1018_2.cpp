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
//		chessArray[i] = new int[col];//입력되는 보드 크기 동적 할당
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
//	}//보드 전체를 입력받는 동시에 첫 블록이 B로 시작하는 경우 변경해야 하는 블록에는 1, 변경하지 않아도 되는 블록에는 0 저장
//
//	for (int i = 0;i < row - 7;i++) {
//		for (int j = 0;j < col - 7;j++) {
//
//			count = 0;
//			for (int k = i;k < i + 8;k++) {
//				for (int l = j;l < j + 8;l++) {
//					count += chessArray[k][l];
//				}
//			}//8*8 범위의 값을 합산
//
//			if (min > (count > 32 ? 64 - count : count))
//				min = (count > 32 ? 64 - count : count);
//			//W로 시작하는 방식으로 칠하는 경우 변경해야 하는 블록수(64-count)와 B로 시작하는 방식으로 칠하는 경우에 변경해야 하는 블록수(count) 비교
//			//둘중 더 작은 값이 min보다 작다면 min을 변경
//		}
//	}
//	cout << min;
//	return 0;
//}