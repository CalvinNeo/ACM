//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <set>
//using namespace std;
//int n, m, S, ans, cnt;
//int a[105][105];
//vector<int> g[105];
//int s[105];
//void dfs(int u) {
//	// cnt是目前完全图的大小
//	// s[] 是完全图的所有点
//	if (cnt == S) {
//		ans++;
//		return;
//	}
//	for (int i = 0; i<g[u].size(); i++) {
//		// 对u的所有相邻的v
//		int v = g[u][i];
//		int flag = 0;
//		for (int j = 1; j <= cnt; j++) {
//			if (a[v][s[j]] == 0) {
//				flag = 1;
//				break;
//			}
//		}
//		// 如果从v可以得到更大的完全图的话
//		if (flag == 0) {
//			cnt++;
//			// 添加该v
//			s[cnt] = v;
//			dfs(v);
//			cnt--;
//		}
//	}
//	return;
//}
//int main() {
//	int t; scanf("%d", &t);
//	while (t--) {
//		scanf("%d%d%d", &n, &m, &S);
//		memset(a, 0, sizeof(a));
//		for (int i = 1; i <= n; i++)
//			g[i].clear();
//		ans = 0; cnt = 0;
//
//		for (int i = 1; i <= m; i++) {
//			int x, y;
//			scanf("%d%d", &x, &y);
//			a[x][y] = 1;
//			a[y][x] = 1;
//			if (x>y) swap(x, y);
//			g[x].push_back(y);
//		}
//		for (int i = 1; i <= n; i++) {
//			// 还原s
//			cnt = 0;
//			s[++cnt] = i;
//			dfs(i);
//		}
//		printf("%d\n", ans);
//	}
//
//	return 0;
//}