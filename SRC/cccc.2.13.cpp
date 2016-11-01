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
//
//#define INF 0x3f3f3f3f
//#define MAXN 505
//using namespace std;
//#define LL long long
//
//vector<int> to[MAXN];
//int vis[MAXN];
//int losts[MAXN];
//int diset[MAXN];
//int oldds[MAXN];
//
//void disinit(int * dis, int N) {
//	for (int i = 0; i < N; i++)
//	{
//		dis[i] = i;
//	}
//}
//int disfind(int * dis, int i) {
//	while (dis[i] != i)
//	{
//		i = dis[i];
//	}
//	return dis[i];
//}
//void dismerge(int * dis, int i, int j) {
//	int a = disfind(dis, i);
//	int b = disfind(dis, j);
//	dis[i] = j;
//	//if (a < b) {
//	//	dis[j] = a;
//	//}
//	//else {
//	//	dis[j] = b;
//	//}
//}
//
//void dfs(int st, int * ds) {
//	vis[st] = 1;
//	for (int i = 0; i < to[st].size(); i++)
//	{
//		// 如果节点还没有被遍历过并且节点尚未被攻占
//		int w = to[st][i];
//		if (vis[w] == 0 && w != -1) {
//			// important
//			// not i but to[st][i]
//			vis[w] = 1;
//			dismerge(ds, w, st);
//			dfs(w, ds);
//		}
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	int N, M, K;
//	scanf("%d %d", &N, &M);
//	for (int eg = 0; eg < M; eg++)
//	{
//		int v, w;
//		scanf("%d %d", &v, &w);
//		to[v].push_back(w);
//		to[w].push_back(v);
//	}
//	scanf("%d", &K);
//	memset(losts, 0, sizeof(losts));
//	memset(vis, 0, sizeof(vis));
//	disinit(oldds, N);
//	dfs(0, oldds);
//	for (int eg = 0; eg < K; eg++)
//	{
//		int lost;
//		scanf("%d", &lost);
//		losts[lost] = 1;
//		//delete node
//		for (int i = 0; i < to[lost].size(); i++)
//		{
//			to[lost][i] = -1;
//		}
//		for (int i = 0; i < N; i++)
//		{
//			for (vector<int>::iterator j = to[i].begin(); j != to[i].end(); j++)
//			{
//				if (*j == lost) {
//					*j == -1;
//				}
//			}
//		}
//		memset(vis, 0, sizeof(vis));
//		// 寻找第一个没有被攻占的节点进行dfs
//		int st;
//		//for (st = 0; st < N; st++)
//		//{
//		//	if (!losts[st])
//		//		break;
//		//}
//		//dfs(st);
//		//printf("olds\n");
//		//for (int i = 0; i < N; i++) {
//		//	printf("%d ", diset[i]);
//		//}
//		//printf("\n");
//		disinit(diset, N);
//		for (int st = 0; st < N; st++)
//		{
//			dfs(st, diset);
//		}
//		bool connected = true;
//		for (int i = 0; i < N; i++)
//		{
//			if (disfind(diset, i) != disfind(oldds, i)) {
//				connected = false;
//				break;
//			}
//		}
//		memcpy(oldds, diset, sizeof(oldds));
//		//for (int i = 0; i < N; i++)
//		//{
//		//	if (vis[i] == 0) {
//		//		connected = false;
//		//		break;
//		//	}
//		//}
//		if (connected) {
//			printf("City %d is lost.\n", lost);
//		}
//		else {
//			printf("Red Alert: City %d is lost!\n", lost);
//		}
//	}
//
//	if (K == N) {
//		printf("Game Over.\n");
//	}
//
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
