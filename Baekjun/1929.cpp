//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int M, N;
//	int checkArray[1000001] = { 0, };
//
//	cin >> M >> N;
//
//	for (int i = 2;i <= N;i++) {
//		checkArray[i] = i;
//	}
//
//	for (int i = 2; i*i <= N;i++) {
//		if (checkArray[i] == 0) continue;
//
//		for (int j = i * i;j <= N;j += i) {
//			checkArray[j] = 0;
//		}
//	}
//
//	for (int i = M;i <= N;i++) {
//		if (checkArray[i] != 0) {
//			cout << checkArray[i] << '\n';
//		}
//	}
//
//	return 0;
//}