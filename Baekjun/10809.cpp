//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string word;
//	int position[26];
//
//	fill_n(position, 26, -1);
//
//	cin >> word;
//	for (int i = 0;i < word.length();i++) {
//		if (position[int(word[i]) - 'a'] == -1)
//			position[int(word[i]) - 'a'] = i;
//	}
//
//	for (int i = 0;i < 26;i++) {
//		cout << position[i] << ' ';
//	}
//	return 0;
//}