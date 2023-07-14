//#include <iostream>
//#include <algorithm>
//#include <climits>
//#include <vector>
//
//#define INF 123456789
//
//using namespace std;
//
//int cost[105][105];
//
//int N, M;
//
//int main() {
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		fill(cost[i], cost[i] + (N + 1), INF);
//	}
//	for (int i = 0; i < M; i++) {
//		int from, to;
//		cin >> from >> to;
//		cost[from][to] = 1;
//		cost[to][from] = 1;
//	}
//	for (int i = 1; i <= N; i++) cost[i][i] = 0;
//
//
//
//	for (int k = 1; k <= N; k++) {
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				cost[i][j] = min(cost[i][k] + cost[k][j], cost[i][j]);
//			}
//		}
//	}
//	vector <pair<int, int>> vec;
//	int ans = INF;
//
//	for (int i = 1; i <= N; i++) {
//		int tot = 0;
//		for (int j = 1; j <= N; j++) {
//			tot += cost[i][j];
//		}
//		if (ans > tot) {
//			ans = tot;
//			vec.push_back({ tot,i });
//		}
//	}
//	sort(vec.begin(), vec.end());
//
//
//	cout << vec[0].second;
//
//	return 0;
//}