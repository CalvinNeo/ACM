//
////#define FFFFF
//#ifndef FFFFF
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
//#include <queue>
//#include <string.h>
//#include <numeric>
//#include <set>
//
//
//#define INF 0x3f3f3f3f
//#define MAXN 1010
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//inline LL sqr(LL x)
//{
//	return x*x;
//}
//
//struct Bomb {
//	int x, y, r, c;
//	Bomb(int _x, int _y, int _r, int _c) : x(_x), y(_y), r(_r), c(_c) {
//
//	}
//	Bomb() {
//
//	}
//};
//
//int n;
//int dfn[MAXN], low[MAXN], index;
//bool instack[MAXN];
//vector<int> s;
//vector<int> m[MAXN];
//int blockid;
//int blockc[MAXN];
//int belong[MAXN];
//Bomb bomb[MAXN];
//bool in[MAXN];
//
//void tarjan(int u) {
//	dfn[u] = low[u] = ++index;
//	s.push_back(u);
//	instack[u] = true;
//	for (int iter = 0; iter < m[u].size(); iter++)
//	{
//		int v = m[u][iter];
//		if (!dfn[v]) {
//			tarjan(v);
//			low[u] = min(low[u], low[v]);
//		}
//		else if (instack[v]) {
//			// backward edge
//			low[u] = min(low[u], dfn[v]);
//		}
//	}
//	if (low[u] == dfn[u]) {
//		blockid++;
//		int x;
//		do
//		{
//			x = s.back();
//			instack[x] = false;
//			blockc[blockid] = min(blockc[blockid], bomb[x].c);
//			belong[x] = blockid;
//			s.pop_back();
//		} while (x != u);//输出联通分量
//	}
//	return;
//}
//
//void clear() {
//	for (int i = 0; i < MAXN; i++)
//	{
//		m[i].clear();
//		blockc[i] = INF;
//	}
//	memset(dfn, 0, sizeof dfn);
//	memset(instack, 0, sizeof instack);
//	memset(low, 0, sizeof low);
//	memset(belong, 0, sizeof belong);
//	memset(in, 0, sizeof in);
//	index = 0;
//	blockid = 0;
//	s.clear();
//}
//
//bool bina(const Bomb &a, const Bomb &b)
//{
//	return sqr(b.x - a.x) + sqr(b.y - a.y) <= sqr(a.r);
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("222.txt", "r", stdin);
//#endif
//	int T, cas = 0;
//	SC1(T);
//	while (T--) {
//		SC1(n);
//		int x, y, r, c;
//		clear();
//		for (int i = 1; i <= n; i++)
//		{
//			SC2(x, y);
//			SC2(r, c);
//			bomb[i] = Bomb(x, y, r, c);
//		}
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++) {
//				if (i != j) {
//					if (bina(bomb[i], bomb[j])) {
//						m[i].push_back(j);
//					}
//				}
//			}
//		}
//		for (int i = 1; i <= n; i++) {
//			if (!dfn[i]) {
//				tarjan(i);
//			}
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 0; j < m[i].size(); j++)
//			{
//				//printf("%d -> %d %d \n", i, m[i][j], belong[m[i][j]] == belong[i]);
//				if (belong[m[i][j]] != belong[i]) {
//					in[belong[m[i][j]]] = true;
//				}
//			}
//		}
//		int ans = 0;
//		for (int i = 1; i <= blockid; i++) {
//			if (!in[i]) {
//				ans += blockc[i];
//			}
//		}
//		printf("Case #%d: %d\n", ++cas, ans);
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
//#else
//
//#endif
//
