//#include <iostream>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <cmath>
//#include <string>
//#include <stack>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <utility>
//using namespace std;
//typedef long long LL;
//const int N = 1e5 + 5;
//const int INF = 0x3f3f3f3f;
//const LL mod = 1e9 + 7;
//priority_queue<int> q;
//int d[N];
//vector<int> mat[N];
//int main()
//{
//	int T, cas = 0;
//	scanf("%d", &T);
//	while (T--) {
//		// printf("Case #%d:\n",++cas);
//		int n, m;
//		scanf("%d%d", &n, &m);
//		int tot = 0;
//		memset(d, 0, sizeof(d));
//		for (int i = 1; i <= n; i++)
//		{
//			mat[i].clear();
//		}
//		for (int i = 1; i <= m; i++) {
//			int u, v;
//			scanf("%d%d", &u, &v);
//			mat[u].push_back(v);
//			++d[v];
//		}
//		while (!q.empty()) q.pop();
//		for (int i = 1; i <= n; ++i)
//			if (!d[i])q.push(i);
//		LL ans = 0; int cur = -1;
//		while (!q.empty()) {
//			int u = q.top();
//			q.pop();
//			if (cur == -1) {
//				cur = u;
//			}
//			else {
//				cur = min(cur, u);
//			}
//			ans += cur;
//			for (int i = 0; i < mat[u].size(); i++) {
//				int v = mat[u][i];
//				--d[v];
//				if (!d[v]) {
//					q.push(v);
//				}
//			}
//		}
//		printf("%I64d\n", ans);
//	}
//	return 0;
//}