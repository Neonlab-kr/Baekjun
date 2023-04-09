//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int N;
//priority_queue<int, vector<int>, greater<int>> p_queue;
//
//int main()
//{
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		int temp;
//		cin >> temp;
//
//		if (temp == 0) {
//			if (p_queue.empty()) {
//				cout << 0 << "\n";
//			}
//			else {
//				cout << p_queue.top() << "\n";
//				p_queue.pop();
//			}
//		}
//		else {
//			p_queue.push(temp);
//		}
//	}
//
//	return 0;
//}