// // http://acm.hdu.edu.cn/diy/diy_listproblem.php?cid=30323
// // http://acm.hdu.edu.cn/showproblem.php?pid=2063
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
//#include <queue>
//#include <string.h>
//#include <numeric>
//
//inline int fastread() {
//
//	char c;
//	int ret = 0;
//	int sgn = 1;
//	do { c = getchar(); } while ((c < '0' || c > '9') && c != '-');
//	if (c == '-') sgn = -1; else ret = c - '0';
//	while ((c = getchar()) >= '0' && c <= '9') ret = ret * 10 + (c - '0');
//	return sgn * ret;
//}
//
//
//#define INF 0x3f3f3f3f
//#define MAXN 2010
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//bool vis[MAXN];
//int mx[MAXN], my[MAXN];
//bool del[MAXN];
//vector<int> unso_r; // 未饱和右部集合
//vector<int> eg[MAXN];
//int K, M, N;
//
//bool match(int u) {
//	for (int j = 1; j <= eg[u].size(); j++)
//	{
//		int v = eg[u][j];
//		if (!vis[v]) {
//			vis[v] = true;
//			if (my[v] == 0 || match(my[v])) {
//				mx[u] = eg[u][v];
//				my[g[u][v]] = u;
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//void hopcroft() {
//
//}
//
//// M 女生个数 左部
//// N 男生个数 右部
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	while (scanf("%d", &K) != EOF) {
//		if (K == 0)return 0;
//		SC2(M, N);
//		int a, b;
//		for (int i = 0; i <= N; i++) {
//			eg[i].clear();
//		}
//		for (int i = 0; i < K; i++)
//		{
//			SC2(a, b);
//			eg[a].push_back(b);
//		}
//		int m = 0;
//		memset(mx,0, sizeof mx);
//		memset(my, 0, sizeof my);
//		for (int i = 1; i <= N; i++)
//		{
//			memset(vis, 0, sizeof vis);
//			if (match(i)) {
//				m++;
//			}
//		}
//		printf("%d\n", m);
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
//
