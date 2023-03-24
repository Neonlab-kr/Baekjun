//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//
//stack<int> numStack;
//vector<char> ans;
//int n;
//int top;
//
//
//int main(void) {
//	numStack.push(top);
//	top++;
//
//	int num;
//	bool valid = true;
//
//	cin >> n;
//
//
//	for (int i = 0; i < n; i++) {
//		cin >> num;
//		while (numStack.top() < num) {
//			numStack.push(top);
//			top++;
//			ans.push_back('+');
//		}
//		if (numStack.top() == num) {
//			numStack.pop();
//			ans.push_back('-');
//		}
//		else {
//			valid = false;
//		}
//	}
//
//	if (!valid) {
//		cout << "NO" << '\n';
//	}
//	else {
//		for (auto ch : ans) {
//			cout << ch << '\n';
//		}
//	}
//
//}