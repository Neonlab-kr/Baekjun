//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//int main() {
//	int row, col, count1, count2, min = 64;
//	cin >> row >> col;
//	char **chessArray = new char*[row];
//	for (int i = 0;i < row;i++)
//		chessArray[i] = new char[col];
//
//	cin.ignore();
//	for (int i = 0;i < row;i++) {
//		for (int j = 0;j < col;j++) {
//			cin >> chessArray[i][j];
//		}
//	}
//
//	for (int i = 0;i < row - 7;i++) {
//		for (int j = 0;j < col - 7;j++) {
//
//			count1 = 0;
//			count2 = 0;
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
//				min = count2;
//		}
//	}
//	cout << min;
//	return 0;
//}