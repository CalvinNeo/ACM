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
//#include <bitset>
//
//#define INF 0x3f3f3f3f
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//const LL MAXN = 200010;
//using namespace std;
//typedef pair<int, int> pii;
//
//struct Edge {
//	int fr, to, w;
//	Edge(int _fr, int _to, int _w) : fr(_fr), to(_to), w(_w) {
//
//	}
//};
//
//bitset<MAXN * MAXN> G;
//bitset<MAXN * MAXN> H;
//
//LL geti(LL x, LL y) {
//	return x * MAXN + y;
//}
//
//int n, m, t;
//bool vis[MAXN];
//int lowcost[MAXN];
//int beg;
//
//void Dijkstra()
//{
//	for (int i = 0; i<n; i++)
//	{
//		lowcost[i] = INF; vis[i] = false; 
//	}
//	lowcost[beg] = 0;
//	for (int j = 0; j<n; j++)
//	{
//		int k = -1;
//		int Min = INF;
//		for (int i = 0; i < n; i++) {
//			if (!vis[i] && lowcost[i] < Min)
//			{
//				Min = lowcost[i];
//				k = i;
//			}
//		}
//		if (k == -1)break;
//		vis[k] = true;
//		for (int i = 0; i < n; i++) {
//			if (!vis[i] && lowcost[k] + H[geti(k,i)] < lowcost[i])
//			{
//				lowcost[i] = lowcost[k] + H[geti(k, i)];
//			}
//		}
//	}
//}
//
//int main() {
//	scanf("%d", t);
//	while (t--) {
//		scanf("%d%d", &n, &m);
//		int u, v;
//		G.reset();
//		for (int i = 0; i < m; i++)
//		{
//			scanf("%d%d", &u, &v);
//			G[geti(u, v)] = G[geti(v, u)] = 1;
//		}
//		H = G.flip();
//		scanf("%d", &beg);
//		Dijkstra();
//		bool fst = true;
//		for (int i = 1; i <= n; i++) {
//			if (i != beg) {
//				if (fst){
//					fst = false;
//				}
//				else {
//					printf(" ");
//				}
//				printf("%d", (lowcost[i] == INF? -1: lowcost[i]));
//			}
//		}
//		puts("");
//	}	
//#ifdef __ACM
//	system("pause");
//#endif
//}