//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int k, n, count = 0;
//	unsigned int mid, high = 0, low = 1, size = 0;
//	cin >> k >> n;
//	unsigned int *numArray = new unsigned int[k];
//	for (int i = 0;i < k;i++) {
//		cin >> numArray[i];
//		high = max(high, numArray[i]);
//	}
//
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		count = 0;
//		for (int i = 0; i < k; i++)
//			count += numArray[i] / mid;
//
//		if (count >= n) {
//			low = mid + 1;
//			if (size < mid) size = mid;
//		}
//		else {
//			high = mid - 1;
//		}
//	}
//
//	cout << size;
//
//	return 0;
//}
