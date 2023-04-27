//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int N, M;
//	int bread[10][10];
//
//	cin >> N >> M;
//
//	cin.ignore();
//	for (int i = 0;i < N;i++) {
//		for (int j = 0;j < M;j++) {
//			bread[i][j] = cin.get() - '0';
//			if (bread[i][j] == '\n' - '0') bread[i][j] = cin.get() - '0';
//		}
//	}
//
//	for (int i = 0;i < N;i++) {
//		for (int j = M - 1;j >= 0;j--) {
//			cout << bread[i][j];
//		}
//		cout << '\n';
//	}
//
//
//	return 0;
//}