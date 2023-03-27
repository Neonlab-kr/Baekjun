//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n, m, tmp;
//int numArray[100000];
//
//int check(int tmp) {
//	int start = 0;
//	int end = n - 1;
//	while (start <= end) {
//		int mid = (start + end) / 2;
//		if (numArray[mid] == tmp) {
//			return 1;
//		}
//		else if (tmp < numArray[mid]) {
//			end = mid - 1;
//		}
//		else{
//			start = mid + 1;
//		}
//	}
//	return 0;
//}
//
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		cin >> numArray[i];
//	}
//	sort(numArray, numArray + n);
//	cin >> m;
//	for (int i = 0;i < m;i++) {
//		cin >> tmp;
//		cout << check(tmp) << '\n';
//	}
//}