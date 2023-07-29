//#include <iostream>
//#include <vector>
//using namespace std;
//
//int n;
//int arr[1000000];
//vector <int> v;
//
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0), cout.tie(0);
//
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//
//	for (int i = 0; i < n; i++) {
//		if (v.size() == 0 || v[v.size() - 1] < arr[i]) v.push_back(arr[i]);
//		else {
//			int left = 0;
//			int right = v.size();
//
//			while (left <= right) {
//				int mid = (left + right) / 2;
//				if (v[mid] >= arr[i]) right = mid - 1;
//				else left = mid + 1;
//			}
//			v[left] = arr[i];
//
//		}
//
//
//	}
//	cout << n - v.size() << endl;
//	return 0;
//}