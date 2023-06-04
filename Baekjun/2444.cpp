//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int N, empty, star = 1;
//	cin >> N;
//	empty = N - 1;
//	for (int i = 0;i < N;i++) {
//		for (int j = 0;j < empty;j++) cout << ' ';
//		for (int j = 0;j < star;j++) cout << '*';
//		empty--;
//		star += 2;
//		cout << '\n';
//	}
//	for (int i = 1;i < N;i++) {
//		for (int j = 0;j < i;j++) cout << ' ';
//		for (int j = 0;j < (N - i) * 2 - 1;j++) cout << '*';
//		cout << '\n';
//	}
//}