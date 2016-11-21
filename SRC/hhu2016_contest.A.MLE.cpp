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
//
//#define INF 0x3f3f3f3f
//#define MAXN 3403
//#define MOD 1000000000
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//int T;
//int n, m;
//
//int W[MAXN], D[MAXN];
//int dp[MAXN][12881];
//
//int main() {
//	while (scanf("%d%d", &n, &m) != EOF) {
//		for (int i = 1; i <= n; i++)
//		{
//			scanf("%d%d", &W[i], &D[i]);
//		}
//		memset(dp, 0, sizeof dp);
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = m; j >= 0; j--)
//			{
//				if (j - W[i] < 0) {
//					dp[i][j] = dp[i - 1][j];
//				}
//				else {
//					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - W[i]] + D[i]);
//				}
//			}
//		}
//		printf("%d\n", dp[n][m]);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}