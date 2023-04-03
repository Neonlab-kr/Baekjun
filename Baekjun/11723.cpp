//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0);
//
//	int count, inputNum;
//	string act;
//	bool check[20] = { false, };
//	cin >> count;
//
//	for (int i = 0;i < count;i++) {
//		cin >> act;
//		
//		if(act == "add"){
//			cin >> inputNum;
//			check[inputNum - 1] = true;
//		}
//		else if(act == "remove") {
//			cin >> inputNum;
//			check[inputNum - 1] = false;
//		}
//		else if (act == "check") {
//			cin >> inputNum;
//			if (check[inputNum - 1]) cout << 1 << '\n';
//			else cout << 0 << '\n';
//		}
//		else if (act == "toggle") {
//			cin >> inputNum;
//			check[inputNum - 1] = !check[inputNum - 1];
//		}
//		else if (act == "all") {
//			for (int j = 0;j < 20;j++) {
//				check[j] = true;
//			}
//		}
//		else if (act == "empty") {
//			*check = { false, };
//		}
//	}
//	return 0;
//}
