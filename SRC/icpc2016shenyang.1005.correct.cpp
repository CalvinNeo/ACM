//// http://acm.hdu.edu.cn/showproblem.php?pid=5952
//
//#include <iostream> 
//#include <fstream>
//#include <vector>
//#include <queue>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <stack>
//#include <functional>
//#include "stdlib.h" 
//#include "time.h"
//#include <set>
//#include <map>
//#include <numeric>
//#include <cctype>
//#include <cmath>
//
//#define INF 0x3f3f3f3f
//#define MAXN 110
//#define MOD 1000000000
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//int T;
//int n, m, s;
//
//vector<int> mp[MAXN];
//int ma[MAXN][MAXN];
//int in[MAXN];
//bool can[MAXN];
//int conn[MAXN];
//int sz;
//int cnt = 0;
//
//void dfs(int st) {
//	// dfs任意过程中都是完全图
//	if (sz >= s) {
//		cnt++;
//		return;
//	}
//	for (int ii = 0; ii < mp[st].size(); ii++)
//	//for (int i = 1; i <= n; i++)
//	{
//		int i = mp[st][ii];
//		if (st != i && can[i] && ma[st][i]) {
//			// (st, i)
//			bool flag = true;
//			for (int j = 0; j < sz; j++)
//			{
//				if (!ma[i][conn[j]]) {
//					flag = false;
//					break;
//				}
//			}
//			if (flag) {
//				conn[sz] = i;
//				sz++;
//				dfs(i);
//				sz--;
//			}
//		}
//	}
//}
//
//int main() {
//	scanf("%d", &T);
//	while (T--) {
//		scanf("%d%d%d", &n, &m, &s);
//		memset(in, 0, sizeof in);
//		memset(ma, 0, sizeof ma);
//		memset(can, 0, sizeof can);
//		cnt = 0;
//		for (int i = 0; i <= n; i++)
//		{
//			mp[i].clear();
//		}
//		for (int i = 0; i < m; i++)
//		{
//			int u, v;
//			scanf("%d%d", &u, &v);
//			in[u]++; in[v]++;
//			ma[u][v] = ma[v][u] = true;
//			if (u > v) swap(u, v); // u <= v
//			mp[u].push_back(v);
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			if (in[i] >= s - 1) {
//				can[i] = true;
//			}
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			// important
//			conn[0] = i;
//			sz = 1;
//			dfs(i);
//			can[i] = false;
//		}
//		printf("%d\n", cnt);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}