//// http://www.itdadao.com/articles/c15a678973p0.html
////by coolxxx
////#include<bits/stdc++.h>
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<iomanip>
//#include<map>
//#include<stack>
//#include<queue>
//#include<set>
//#include<bitset>
//#include<memory.h>
//#include<time.h>
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////#include<stdbool.h>
//#include<math.h>
//#pragma comment(linker,"/STACK:1024000000,1024000000")
//#define min(a,b) ((a)<(b)?(a):(b))
//#define max(a,b) ((a)>(b)?(a):(b))
//#define abs(a) ((a)>0?(a):(-(a)))
//#define lowbit(a) (a&(-a))
//#define sqr(a) ((a)*(a))
//#define swap(a,b) ((a)^=(b),(b)^=(a),(a)^=(b))
//#define mem(a,b) memset(a,b,sizeof(a))
//#define eps (1e-8)
//#define J 10000
//#define mod 2147493647
//#define MAX 0x7f7f7f7f
//#define PI 3.14159265358979323
//#define N 104
//#define M 2004
//using namespace std;
//typedef long long LL;
//int T;
//int n, m, s, lll, ans, sz;
//int last[N];
//
//struct xxx
//{
//	int next, to;
//}a[M];
//
//int b[N], c[N], in[N];
//
//void add(int x, int y)
//{
//	a[++sz].next = last[x];
//	a[sz].to = y;
//	last[x] = sz;
//}
//bool ma[N][N];
//void dfs(int top, int now)
//{
//	// 如果剩下的点都不够s了
//	if (top - 1 + lll - now < s) return;
//	if (top == s + 1)
//	{
//		ans++;
//		return;
//	}
//	int i, j, to;
//	for (i = last[now]; i; i = a[i].next)
//	{
//		to = a[i].to;
//		if (!ma[c[now]][c[to]] || to<now)continue;
//		for (j = 1; j<top; j++)
//			if (!ma[c[to]][b[j]])break;
//		if (j<top)continue;
//		b[top] = to;
//		
//		dfs(top + 1, to);
//		b[top] = 0;
//	}
//}
//int main()
//{
//	int i, j, k;
//	int x, y, z;
//	for (scanf("%d", &T); T; T--){
//		mem(ma, 0); mem(in, 0); mem(last, 0); 
//		ans = 0; lll = 0; sz = 0;
//		scanf("%d%d%d", &n, &m, &s);
//		for (i = 1; i <= m; i++)
//		{
//			scanf("%d%d", &x, &y);
//			in[x]++, in[y]++;
//			ma[x][y] = ma[y][x] = 1;
//		}
//		// 只添加度大于等于s-1的点
//		for (i = 1; i <= n; i++)
//			if (in[i] >= s - 1)
//				c[++lll] = i;
//		// 重新建图
//		for (i = 1; i <= lll; i++)
//			for (j = i + 1; j <= lll; j++)
//				if (ma[c[i]][c[j]])
//					add(i, j);
//		for (i = 1; i <= lll; i++)
//		{
//			// c是新的图
//			b[1] = c[i];
//			dfs(2, i);
//			//枚举完某个点可以删掉该点的所有边
//			for (j = last[c[i]]; j; j = a[j].next)
//				ma[c[a[j].to]][c[i]] = ma[c[i]][c[a[j].to]] = 0;
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}
///*
////
//
////
//*/