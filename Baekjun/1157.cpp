//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string str;
//	int count[26] = { 0 };
//	int max = 0;
//	char ans;
//	getline(cin,str);
//	for (int i = 0;i < str.length();i++) {
//		if (str[i] >= 'a')
//			str[i] -= 32;
//
//		count[int(str[i]) - 'A']++;
//	}
//	
//	for (int i = 0;i < 26;i++) {
//		if (max < count[i]) {
//			max = count[i];
//			ans = i + 'A';
//		}
//		else if (max != 0 && max == count[i])
//			ans = '?';
//	}
//	cout << ans;
//	return 0;
//}