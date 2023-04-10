//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//
//	int n,tmp;
//	priority_queue<int> pq;
//
//	cin >> n;
//
//	for (int i = 0;i < n; i++) {
//
//		cin >> tmp;
//
//		if (tmp == 0) {
//			if (pq.empty()) {
//				cout << "0\n";
//			} else {
//				cout << pq.top() << "\n";
//				pq.pop();
//			}
//		} else {
//			pq.push(tmp);
//		}
//	}
//
//	return 0;
//}