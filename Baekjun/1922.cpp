//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int N, M, res = 0;
//int parent[1001];
//vector < pair<int, pair<int, int>>> v;
//
//int findParent(int a) {
//	if (parent[a] == a) return a;
//	else return parent[a] = findParent(parent[a]);
//}
//
//void unionParent(int a, int b) {
//	a = findParent(a);
//	b = findParent(b);
//
//	if (a != b) parent[b] = a;
//}
//
//bool sameParent(int a, int b) {
//	a = findParent(a);
//	b = findParent(b);
//
//	if (a == b) return true;
//	else return false;
//}
//
//void solution() {
//	sort(v.begin(), v.end());
//
//	for (int i = 1; i <= N; i++) {
//		parent[i] = i;
//	}
//
//	for (int i = 0; i < M; i++) {
//		int a = v[i].second.first;
//		int b = v[i].second.second;
//		int cost = v[i].first;
//
//		if (!sameParent(a, b)) {
//			unionParent(a, b);
//			res += cost;
//		}
//	}
//
//	cout << res;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> N;
//	cin >> M;
//
//	for (int i = 0; i < M; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//
//		v.push_back({ c,{a,b} });
//	}
//
//	solution();
//
//	return 0;
//}