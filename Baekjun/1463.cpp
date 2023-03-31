//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0);
//
//	int n;
//	cin >> n;
//	vector<int> count(n + 1);
//
//	count[1] = 0;
//	for (int i = 2; i <= n; i++) {
//		count[i] = count[i - 1] + 1;
//		if (!(i % 3)) count[i] = min(count[i], count[i / 3] + 1);
//		if (!(i % 2)) count[i] = min(count[i], count[i / 2] + 1);
//	}
//
//	cout << count[n] << endl;
//	return 0;
//}