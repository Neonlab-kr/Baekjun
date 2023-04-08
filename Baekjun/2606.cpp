//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int n, e, u, v, ans = 0;
//	int visit[101] = { 0, };
//	int g[101][101];
//
//	cin >> n >> e;
//
//	for (int i = 1; i <= e; i++) {
//		cin >> u >> v;
//		g[u][v] = g[v][u] = 1;
//
//	}
//
//	queue<int> open_list;
//
//	open_list.push(1);
//	visit[1] = 1;
//
//	while (!open_list.empty()) {
//		int temp = open_list.front();
//		open_list.pop();
//		ans++;
//
//		for (int i = 1; i <= n; i++) {
//			if (g[temp][i] == 1 && visit[i] == 0) {
//				visit[i] = 1;
//				open_list.push(i);
//			}
//		}
//	}
//
//	cout << ans - 1;
//	return 0;
//}