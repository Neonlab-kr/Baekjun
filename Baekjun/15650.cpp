//#include <iostream>
//#define MAX 9
//using namespace std;
//
//int n, m;
//int arr[MAX] = { 0, };
//bool visited[MAX] = { 0, };
//
//void dfs(int num, int cnt)
//{
//	if (cnt == m)
//	{
//		for (int i = 0; i < m; i++)
//			cout << arr[i] << ' ';
//		cout << '\n';
//		return;
//	}
//	for (int i = num; i <= n; i++)
//	{
//		if (!visited[i])
//		{
//			visited[i] = true;
//			arr[cnt] = i;
//			dfs(i + 1, cnt + 1);
//			visited[i] = false;
//		}
//	}
//}
//
//int main() {
//	cin >> n >> m;
//	if (0 == m)
//	{
//		for (int i = 0; i < m; i++)
//			cout << arr[i] << ' ';
//		cout << '\n';
//		return 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (!visited[i])
//		{
//			visited[i] = true;
//			arr[0] = i;
//			dfs(i + 1, 0 + 1);
//			visited[i] = false;
//		}
//	}
//}