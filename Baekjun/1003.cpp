//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0);
//
//	int test, input;
//	vector<pair<int, int>>countVector;
//	countVector.push_back({ 1,0 });
//	countVector.push_back({ 0,1 });
//	for (int i = 2;i < 41;i++) {
//		countVector.push_back({ countVector[i - 1].first + countVector[i - 2].first , countVector[i - 1].second + countVector[i - 2].second });
//	}
//
//	cin >> test;
//
//	for (int i = 0;i < test;i++) {
//		cin >> input;
//		cout << countVector[input].first << ' ' << countVector[input].second << '\n';
//	}
//
//	return 0;
//}