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
//		for (int i = 2; i <= n; i++)
//		{
//			for (int j = 1; j <= m; j++)
//			{
//				if (dp[i - 1][j + 1] <= min(dp[i - 1][j - 1], dp[i - 1][j]) && j - 1 != m + 1) {
//					// 往左过来
//					dp[i][j] = dp[i - 1][j + 1] + mp[i][j];
//					from[i][j] = j + 1;
//				}
//				if (dp[i - 1][j] <= min(dp[i - 1][j - 1], dp[i - 1][j + 1])) {
//					// 正上方边过来
//					dp[i][j] = dp[i - 1][j] + mp[i][j];
//					from[i][j] = j;
//				}
//				if (dp[i - 1][j - 1] <= min(dp[i - 1][j], dp[i - 1][j + 1]) && j - 1 != 0) {
//					// 往右过来
//					dp[i][j] = dp[i - 1][j - 1] + mp[i][j];
//					from[i][j] = j - 1;
//				}
//			}
//		}
//		int min_c = 0;
//		for (int i = 1; i <= m; i++)
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