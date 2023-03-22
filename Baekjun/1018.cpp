//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//int main() {
//	int row, col, count1, count2, min = 64;
//	cin >> row >> col;
//	char **chessArray = new char*[row];
//	for (int i = 0;i < row;i++)
//		chessArray[i] = new char[col];//입력되는 보드 크기 동적 할당
//
//	cin.ignore();
//	for (int i = 0;i < row;i++) {
//		for (int j = 0;j < col;j++) {
//			cin >> chessArray[i][j];//보드 전체 입력받기
//		}
//	}
//
//	for (int i = 0;i < row - 7;i++) {
//		for (int j = 0;j < col - 7;j++) {
//
//			count1 = 0;//첫 블록이 B일때 변경해야하는 블록 수
//			count2 = 0;//첫 블록이 W일때 변경해야하는 블록 수
//			for (int k = i;k < i + 8;k++) {
//				for (int l = j;l < j + 8;l++) {
//
//					if ((k + l) % 2 == 0) {
//						if (chessArray[k][l] != 'B')
//							count1++;
//						else
//							count2++;
//					}
//					else {
//						if (chessArray[k][l] != 'W')
//							count1++;
//						else
//							count2++;
//					}
//				}
//			}
//			if (min > count1)
//				min = count1;
//			if (min > count2)
//				min = count2;//둘중 더 작은 값을 min에 저장
//		}
//	}
//	cout << min;
//	return 0;
//}
