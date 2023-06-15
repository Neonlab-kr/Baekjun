//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int map[1000][1000];
//bool visit[1000][1000];
//
//int dx[4] = { 1, -1, 0, 0 };
//int dy[4] = { 0, 0, 1, -1 };
//
//queue<pair<int, int>> q;
//
//int n, m;
//
//void bfs() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
//				if (visit[nx][ny] == false) {
//					map[nx][ny] = map[x][y] + 1;
//					visit[nx][ny] = true;
//					q.push({ nx, ny });
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//
//	for (int x = 0; x < n; x++) {
//		for (int y = 0; y < m; y++) {
//			scanf("%d", &map[x][y]);
//			if (map[x][y] == 2) {
//				// ��ǥ ������ ���
//				map[x][y] = 0;
//				q.push({ x, y });
//				visit[x][y] = true;
//			}
//			else if (map[x][y] == 0) {
//				// �� �� ���� ���� ���
//				visit[x][y] = true;
//			}
//		}
//	}
//
//	bfs();
//
//	for (int x = 0; x < n; x++) {
//		for (int y = 0; y < m; y++) {
//			if (visit[x][y] == false) {
//				// ���� ���� �κ� �߿��� ������ �� ���� ��ġ�� -1�� ����Ѵ� ��� ������ ���õǾ� �����Ƿ�
//				printf("-1 ");
//			}
//			else {
//				printf("%d ", map[x][y]);
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}