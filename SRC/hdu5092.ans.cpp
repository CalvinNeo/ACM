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
//#define MAXN 105
//#define INF 0x3f3f3f3f
//#define LL long long
//
//int cas = 0;
//LL mp[MAXN][MAXN];
//LL from[MAXN][MAXN];
//LL dp[MAXN][MAXN];
//LL ans[MAXN];
//
//int main() {
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		cas++;
//		int n, m;
//		scanf("%d%d", &n, &m);
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= m; j++)
//			{
//				scanf("%lld", &mp[i][j]);
//			}
//		}
//		memset(from, 0, sizeof from);
//		for (int i = 0; i <= n + 1; i++)
//		{
//			for (int j = 0; j <= m + 1; j++)
//			{
//				dp[i][j] = INF;
//			}
//		}
//		for (int i = 1; i <= m; i++)
//		{
//			dp[1][i] = mp[1][i];
//		}
//		for (int i = 1; i <= n - 1; i++)
//		{
//			for (int j = m; j >= 1; j--)
//			{
//				// >= 就不对了
//				if (dp[i + 1][j] > dp[i][j] + mp[i + 1][j]) {
//					// 更新正下的
//					dp[i + 1][j] = dp[i][j] + mp[i + 1][j];
//					from[i + 1][j] = j;
//				}
//				if (j - 1 != 0 && dp[i + 1][j - 1] > dp[i][j] + mp[i + 1][j - 1]) {
//					// 更新左下的
//					dp[i + 1][j - 1] = dp[i][j] + mp[i + 1][j - 1];
//					from[i + 1][j - 1] = j;
//				}
//				if (j + 1 != m + 1 && dp[i + 1][j + 1] > dp[i][j] + mp[i + 1][j + 1]) {
//					// 更新右下的
//					dp[i + 1][j + 1] = dp[i][j] + mp[i + 1][j + 1];
//					from[i + 1][j + 1] = j;
//				}
//			}
//		}
//		int min_c = 0;
//		for (int i = m; i >= 1; i--)
//		{
//			if (dp[n][i] < dp[n][min_c]) {
//				min_c = i;
//			}
//		}
//		int cc = min_c;
//		for (int i = n; i >= 1; i--)
//		{
//			ans[i] = cc;
//			cc = from[i][cc];
//		}
//		printf("Case %d\n", cas);
//		for (int i = 1; i <= n; i++)
//		{
//			if (i != 1) {
//				printf(" ");
//			}
//			printf("%lld", ans[i]);
//		}
//		printf("\n");
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}