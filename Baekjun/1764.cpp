//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	map<string, int> ma;
//	vector<string> vt;
//	int n, m;
//	string tmp;
//
//	cin >> n >> m;
//	cin.ignore();
//
//	for (int i = 0; i < n + m; i++) {
//		cin >> tmp;
//		ma[tmp]++;
//		if (ma[tmp] > 1)
//			vt.push_back(tmp);
//	}
//	sort(vt.begin(), vt.end());
//	cout << vt.size() << '\n';
//	for (auto o : vt)
//		cout << o << '\n';
//
//	return 0;
//}