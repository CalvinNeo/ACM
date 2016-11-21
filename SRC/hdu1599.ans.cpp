//#include <cstdio>
//#include <cstring>
//int const INF = 0xfffffff;
//int const MAX = 105;
//int d[MAX][MAX], map[MAX][MAX];
//int n, m, mi;
//
//
//int main()
//{
//	int u, v, w;
//	while (scanf("%d %d", &n, &m) != EOF)
//	{
//		mi = INF;
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//				map[i][j] = d[i][j] = INF;
//		for (int i = 0; i < m; i++)
//		{
//			scanf("%d %d %d", &u, &v, &w);
//			if (map[u][v] > w)
//			{
//				map[u][v] = map[v][u] = w;
//				d[u][v] = d[v][u] = w;
//			}
//		}
//		for (int k = 1; k <= n; k++)
//		{
//			for (int i = 1; i < k; i++)
//				for (int j = 1; j < i; j++)
//					if (d[i][j] + map[i][k] + map[k][j] < mi)
//						mi = d[i][j] + map[i][k] + map[k][j];
//			for (int i = 1; i <= n; i++)
//				for (int j = 1; j <= n; j++)
//					if (d[i][j] > d[i][k] + d[k][j])
//						d[i][j] = d[i][k] + d[k][j];
//		}
//		if (mi == INF)
//			printf("It's impossible.\n");
//		else
//			printf("%d\n", mi);
//	}
//}