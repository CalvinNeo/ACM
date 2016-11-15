//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <string>
//#include <cstring>
//#include <queue>
//using namespace std;
//#define MAXN 30010
//
//int dp[105][55];
//int mp[51][51];
//int pl[105];
//
//int main() {
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int n, m;
//		scanf("%d%d", &n, &m);
//		for (int i = 1; i <= m; i++)
//		{
//			for (int j = 1; j <= m; j++)
//			{
//				scanf("%d", &mp[i][j]);
//			}
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			scanf("%d", &pl[i]);
//		}
//		memset(dp, 0, sizeof dp);
//		for (int i = 2; i <= n; i++)
//		{
//			if (pl[i] == -1) {
//				if (pl[i - 1] == -1) {
//					// 枚举pl[i - 1]
//					for (int j = 1; j <= m; j++)
//					{
//						// 枚举pl[i]
//						for (int k = 1; k <= m; k++)
//						{
//							// j -> k
//							dp[i][k] = dp[i - 1][j] + mp[j][k];
//						}
//					}
//				}
//				else {
//					// 枚举pl[i]
//					for (int j = 1; j <= m; j++)
//					{
//						// pl[i - 1] -> j
//						dp[i][j] = dp[i - 1][pl[i - 1]] + mp[pl[i - 1]][j];
//					}
//				}
//			}
//			else {
//				if (pl[i - 1] == -1) {
//					// 枚举pl[i - 1]
//					for (int j = 1; j <= m; j++)
//					{
//						// j -> pl[i]
//						dp[i][pl[i]] = max(dp[i][pl[i]], dp[i - 1][j] + mp[j][pl[i]]);
//					}
//				}
//				else {
//					// 两个都已知
//					dp[i][pl[i]] = dp[i - 1][pl[i - 1]] + mp[pl[i - 1]][pl[i]];
//				}
//			}
//		}
//		int ans = 0;
//		for (int i = 1; i <= m; i++)
//		{
//			ans = max(ans, dp[n][i]);
//		}
//		printf("%d\n", ans);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}