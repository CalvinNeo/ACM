//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//const int maxn = 110;
//const int INF = 0x7ffffff;
//int  dist[maxn][maxn], map[maxn][maxn];
//int  pre[maxn][maxn];
//int  path[maxn];
//int  n, m, num, minc;
//
//void floyd()
//{
//	minc = INF;
//	for (int k = 1; k <= n; k++)
//	{
//		for (int i = 1; i<k; i++)
//			for (int j = i + 1; j<k; j++)
//			{
//				int  ans = dist[i][j] + map[i][k] + map[k][j];
//				if (ans<minc)  //�ҵ����Ž�
//				{
//					minc = ans;
//					num = 0;
//					int p = j;
//					while (p != i)  //����Ѱ��ǰ��������·��������洢����
//					{
//						path[num++] = p;
//						p = pre[i][p];
//					}
//					path[num++] = i;
//					path[num++] = k;
//				}
//			}
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//			{
//				if (dist[i][j]>dist[i][k] + dist[k][j])
//				{
//					dist[i][j] = dist[i][k] + dist[k][j];
//					pre[i][j] = pre[k][j];
//				}
//			}
//	}
//}
//
//int main()
//{
//	int  u, v, cost;
//	while (cin >> n)
//	{
//		if (n<0) break;
//		cin >> m;
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//			{
//				dist[i][j] = map[i][j] = INF;
//				pre[i][j] = i;
//			}
//		for (int i = 1; i <= m; i++)
//		{
//			scanf("%d%d%d", &u, &v, &cost);
//			if (dist[u][v]>cost)   //�����ر�
//				map[u][v] = map[v][u] = dist[u][v] = dist[v][u] = cost;
//		}
//		floyd();
//		if (minc == INF)
//			printf("No solution.\n");
//		else
//		{
//			printf("%d", path[0]);
//			for (int i = 1; i<num; i++)
//				printf(" %d", path[i]);
//			puts("");
//		}
//	}
//	return 0;
//}