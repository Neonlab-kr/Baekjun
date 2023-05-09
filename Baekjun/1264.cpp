//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	char vowel[5] = { 'a','e','i','o','u' };
//	string tmp;
//	while (true)
//	{
//		int cnt = 0;
//		getline(cin, tmp);
//		if (tmp[0] == '#') break;
//		for (int i = 0;i < tmp.length();i++) {
//			if (tmp[i] >= 'A' && tmp[i] <= 'Z') tmp[i] += 32;
//			for (char v : vowel) if (tmp[i] == v) cnt++;
//		}
//		cout << cnt << '\n';
//	}
//}