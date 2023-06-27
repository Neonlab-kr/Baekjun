//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int T, money;
//	cin >> T;
//
//	while (T--) {
//		int Q = 0, D = 0, N = 0, P = 0;
//		cin >> money;
//		while (money) {
//			if (money >= 25) {
//				Q++;
//				money -= 25;
//			}
//			else if (money >= 10) {
//				D++;
//				money -= 10;
//			}
//			else if (money >= 5) {
//				N++;
//				money -= 5;
//			}
//			else {
//				P++;
//				money -= 1;
//			}
//		}
//		cout << Q << " " << D << " " << N << " " << P << "\n";
//	}
//}