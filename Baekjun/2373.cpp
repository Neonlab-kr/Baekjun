//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int fibonacci[32],N, biggestFiboUnderN;
//	fibonacci[1] = fibonacci[2] = 1;
//
//	for (int i = 3; i < 32; i++) {
//		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
//	}
//
//	cin >> N;
//	biggestFiboUnderN = N;
//	while (true) {
//		int check = biggestFiboUnderN;
//		for (int i = 1; i < 32; i++) {
//			if (check < fibonacci[i]) {
//				check = fibonacci[i - 1];
//				break;
//			}
//		}
//
//		if (check == biggestFiboUnderN) {
//			break;
//		}
//
//		biggestFiboUnderN -= check;
//	}
//	if (biggestFiboUnderN == N) cout << -1 << '\n';
//	else cout << biggestFiboUnderN << '\n';
//}